#include <stdio.h>
#include <math.h>

double distP(double x1,double x2,double y1,double y2){
  double res;
  double num = pow((x2-x1), 2) + pow((y2-y1),2);
  res = sqrt(num);
  return res;
}

int main(){
  double x1,x2,y1,y2;
  double res;
  scanf("%lf %lf\n%lf %lf",&x1,&y1,&x2,&y2);

  res = distP(x1,x2,y1,y2);

  printf("%.4lf\n",res);
  return 0;
}
