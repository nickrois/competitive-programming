#include <stdio.h>


struct segment_tree{
	segment_tree *left,*right;
	int from, to, value;
	
	segment_tree(int f, int t) : from(f), to(t), value(0){}
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
		if(res->left != NULL) res->value += res->left->value;
		if(res->right !=NULL) res->value += res->right->value;
	}
	return res;
}

int query(segment_tree *tree,int l, int r){
	if(tree==NULL) return 0;
	if(l<=tree->from && tree->to <= r) return tree->value;
	if(tree->to < l) return 0;
	if(r < tree->from) return 0;
	
	return query(tree->left,l,r) + query(tree->right,l,r);
}

int update(segment_tree *tree, int i, int val){
	if(tree==NULL) return 0;
	if(tree->to < i) return tree->value;
	if(i < tree->from) return tree->value;
	
	if(tree->from == tree->to && tree->from == i) tree->value = val;
	else tree->value = update(tree->left,i,val) + update(tree->right,i,val);
	
	return tree->value;
}

int main(){
	int x[10] = {1,2,3,4,5,6,7,8,9,10};
	segment_tree *tree = build(x,0,9);
	
	printf("%d\n", query(tree,0,9));
	
	update(tree,9,11);
	
	printf("%d\n", query(tree,0,9));
	
	return 0;
}
