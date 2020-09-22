
#include<math.h>
int main()
{
    double a,b,c,x1,x2,r;
    scanf("%d%d%d", &a,&b,&c);
    x1=-b+sqrt(b*b)-(4*a*c)/2*a;
    x2=-b-sqrt(b*b)-(4*a*c)/2*a;
    r=b*b-4*a*c;
    if(a==0 || r<0)
    {
        printf("Impossivel calcular");
    }
    else
    {
        printf("R1 = %.5lf\nR1 = %.5lf",x1,x2);
    }
    return 0;
}
