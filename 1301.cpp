#include <stdio.h>

int x[100000];

struct segment_tree{
	segment_tree *left,*right;
	int from, to, value;

	segment_tree(int f, int t) : from(f), to(t), value(1){}
};

segment_tree *build(int arr[], int l, int r){
	if(l>r) return NULL;
	segment_tree *res = new segment_tree(l,r);

	if(l==r){
		res->value = arr[l];
	}else{
		int m = (l+r)/2;
		res->left = build(arr,l,m);
		res->right = build(arr,m+1,r);
		if(res->left != NULL) res->value *= res->left->value;
		if(res->right !=NULL) res->value *= res->right->value;
	}
	return res;
}

int query(segment_tree *tree,int l, int r){
	if(tree==NULL) return 1;
	if(l<=tree->from && tree->to <= r) return tree->value;
	if(tree->to < l) return 1;
	if(r < tree->from) return 1;

	return query(tree->left,l,r) * query(tree->right,l,r);
}

int update(segment_tree *tree, int i, int val){
	if(tree==NULL) return 1;
	if(tree->to < i) return tree->value;
	if(i < tree->from) return tree->value;

	if(tree->from == tree->to && tree->from == i) tree->value = val;
	else tree->value = update(tree->left,i,val) * update(tree->right,i,val);

	return tree->value;
}








int main(){
int n,k,l,v,p=1;
char cmd;

while(scanf("%d %d",&n,&k) != EOF){
	for(int i=0;i<n;i++){
		scanf("%d",&x[i]);
		if(x[i] > 0) x[i] = 1;
		else if(x[i]<0) x[i] = -1;
	}

	segment_tree *tree = build(x,0,n-1);

	for(int i=0;i<k;i++){
		scanf(" %c %d %d",&cmd,&l,&v);

		if(cmd == 'C'){
			if(v>0) v = 1;
			else if(v<0) v = -1;
			update(tree,l-1,v);
		}

		p = 1;
		if(cmd == 'P'){
			p = query(tree,l-1,v-1);

			if(p>0)
				printf("+");
			else if(p<0)
				printf("-");
			else
				printf("0");
		}
	}
	printf("\n");
}



return 0;
}
