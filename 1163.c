#include <stdio.h>
#include <math.h>
#define PI 3.14159
#define G 9.80665
int main(){

  double h;
  int p1, p2;
  int n, i;
  double ang, vel;
  double tempo, alt=0, dX;

  while(scanf ("%lf", &h) != EOF){
    getchar();
    scanf("%d %d", &p1, &p2);
    getchar();
    scanf("%d", &n);
    getchar();
    for(i=0;i<n;i++){
      scanf("%lf %lf", &ang, &vel);
      getchar();

      ang = ang*PI/180;
      alt = pow(vel,2)*pow(sin(ang),2)/(2*G) + h;
      tempo = vel*sin(ang)/G + sqrt(2*alt/G);
      dX = vel*cos(ang)*tempo;

      if((dX>=p1) && (dX<=p2))
        printf("%.5lf -> DUCK\n", dX);
      else
        printf("%.5lf -> NUCK\n", dX);
    }
  }

  return 0;
}
