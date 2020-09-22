#include<stdio.h>
int main()
{
    double A,B,C,t,c,x,s,r;
    scanf("%lf%lf%lf", &A,&B,&C);
    t=A*C/2;
    c=3.14159*C*C;
    x=(A+B)*C*.5;
    s=B*B;
    r=A*B;

    printf("TRIANGULO: %.3lf\n",t);
    printf("CIRCULO: %.3lf\n",c);
    printf("TRAPEZIO: %.3lf\n",x);
    printf("QUADRADO: %.3lf\n",s);
    printf("RETANGULO: %.3lf\n",r);

    return 0;

}
