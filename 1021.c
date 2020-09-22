#include<stdio.h>
int main()
{
    int n;
    double m;
    scanf("%d%lf", &n,&m);

    printf("%d\n", n);
    printf("%d nota(s) de R$ 100,00\n", n/100);
    n %= 100;
    printf("%d nota(s) de R$ 50,00\n", n/50);
    n %= 50;
    printf("%d nota(s) de R$ 20,00\n", n/20);
    n %= 20;
    printf("%d nota(s) de R$ 10,00\n", n/10);
    n %= 10;
    printf("%d nota(s) de R$ 5,00\n", n/5);
    n %= 5;
    printf("%d nota(s) de R$ 2,00\n", n/2);
    n %= 2;

    printf("MOEDAS:\n");
    printf("%.2lf moeda(s) de R$ 1.00\n",m/1);
    m %= 1;
    printf("%.2lf moeda(s) de R$ 0.50\n",m/.50);
    m %= .50;
    printf("%.2lf moeda(s) de R$ 0.25\n",m/.25);
    m %= .25;
    printf("%.2lf moeda(s) de R$ 0.10\n",m/.10);
    m %= .10;
    printf("%.2lf moeda(s) de R$ 0.05\n",m/.05);
    m %= .05;
    printf("%.2lf moeda(s) de R$ 0.01\n",m/.01);
    m %= .01;


    return 0;
}

