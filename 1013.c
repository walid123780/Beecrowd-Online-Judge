#include<stdio.h>
int main()
{
    int a,b,c,d,sum;
    scanf("%d%d%d", &a,&b,&c);

    d=(a+b+abs(a-b))/2;
    sum=(c+d+abs(c-d))/2;

    printf("%d eh o maior",sum);
    printf("\n");

    return 0;

}
