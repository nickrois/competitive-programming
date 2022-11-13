#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

int main(){
  int casos;
  double volEach,h,friends,mL,b,B,H;
  scanf("%d",&casos);

  for(int i=0;i<casos;i++){
    scanf("%lf %lf",&friends,&mL);
    getchar();
    scanf("%lf %lf %lf",&b,&B,&H);
    volEach = mL/friends; //mL = cm3
    B = pow(volEach*3.0*(B-b)/(PI*H)+b*b*b,1.0/3.0);
    h = 3*volEach/((pow(B,2.0)+(B*b)+pow(b,2.0))*PI);

    printf("%.2lf\n",h);
  }

  return 0;
}
