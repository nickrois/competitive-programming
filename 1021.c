#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    double valor;
    int n100, n50, n20, n10, n5, n2, m100, m050, m025;
    double m010, m005, m001;

    scanf("%lf", &valor);

    div_t resultado = div(valor,100);
    n100 = resultado.quot;
    valor = valor - resultado.quot*100;

    div_t resultado1 = div(valor,50);
    n50 = resultado1.quot;
    valor = valor - resultado1.quot*50;

    div_t resultado2 = div(valor,20);
    n20 = resultado2.quot;
    valor = valor - resultado2.quot*20;

    div_t resultado3 = div(valor,10);
    n10 = resultado3.quot;
    valor = valor - resultado3.quot*10;

    div_t resultado4 = div(valor,5);
    n5 = resultado4.quot;
    valor = valor - resultado4.quot*5;

    div_t resultado5 = div(valor,2);
    n2 = resultado5.quot;
    valor = valor - resultado5.quot*2;

    div_t resultado6 = div(valor,1);
    m100 = resultado6.quot;
    valor = valor - resultado6.quot*1;

    m050 = abs(valor/0.50);
    valor = valor - m050*0.50;

    m025 = abs(valor/0.25);
    valor = valor - m025*0.25;

    m010 = abs(valor/0.10);
    valor = valor - m010*0.10;

    m005 = abs(valor/0.05);
    valor = valor - m005*0.05;

    m001 = abs((valor/0.01)+0.005);
    valor = valor - m001*0.01;


    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", m100);
    printf("%d moeda(s) de R$ 0.50\n", m050);
    printf("%d moeda(s) de R$ 0.25\n", m025);
    printf("%1.0lf moeda(s) de R$ 0.10\n", m010);
    printf("%1.0lf moeda(s) de R$ 0.05\n", m005);
    printf("%1.0lf moeda(s) de R$ 0.01\n", m001);


    return 0;
}
