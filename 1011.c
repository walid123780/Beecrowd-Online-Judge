#include<stdio.h>
int main()
{
    int A1,B1,A2,B2;
    double X1,X2,S1,S2,T;
    scanf("%d %d %lf", &A1,&B1,&X1);
    scanf("%d %d %lf", &A2,&B2,&X2);


    S1=B1*X1;
    S2=B2*X2;
    T=S1+S2;

    printf("VALOR A PAGAR: R$ %lf\n",T);

    return 0;

}
