#include <stdio.h>

int main() {

    int horas, velocidade;
    float res;

    scanf("%d\n%d",&horas, &velocidade);
    res = (float) horas*velocidade/12;
    printf("%.3f", res);
    printf("\n");
    return 0;
}
