#include<stdio.h>
int main()
{
    int temp,r1,r2,r3,r4,r5,r6,r7,r8,r9,r10,r11;
    double x;
    scanf("%lf",&x);
    temp=x*100;
    printf("NOTAS:\n%d nota(s) de R$ 100.00\n",temp/10000);
    r1=temp%10000;
    printf("%d nota(s) de R$ 50.00\n",r1/5000);//1
    r2=r1%5000;
    printf("%d nota(s) de R$ 20.00\n",r2/2000);//2
    r3=r2%2000;
    printf("%d nota(s) de R$ 10.00\n",r3/1000);//3
    r4=r3%1000;
    printf("%d nota(s) de R$ 5.00\n",r4/500);//4
    r5=r4%500;
    printf("%d nota(s) de R$ 2.00\n",r5/200);//5
    r6=r5%200;
    printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n",r6/100);//6
    r7=r6%100;
    printf("%d moeda(s) de R$ 0.50\n",r7/50);//7
    r8=r7%50;
    printf("%d moeda(s) de R$ 0.25\n",r8/25);
    r9=r8%25;
    printf("%d moeda(s) de R$ 0.10\n",r9/10);
    r10=r9%10;
    printf("%d moeda(s) de R$ 0.05\n",r10/5);
    r11=r10%5;
    printf("%d moeda(s) de R$ 0.01\n",r11/1);
    return 0;
}
