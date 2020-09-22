#include <stdio.h>
#include<math.h>
int main()
{
    double a,b,c,result1,result2;
    scanf("%lf %lf %lf",&a,&b,&c);
    double value1=(b*b)-(4*a*c);
    double value2=sqrt(value1);
    double valuex=-b+value2;
    double valuey=-b-value2;
    result1=valuex/(2*a);
    result2=valuey/(2*a);
    if(a==0 ||value1<0  )
    {
        printf("Impossivel calcular\n");
    }
    else
        printf("R1 = %.5lf\nR2 = %.5lf\n",result1,result2);
    return 0;
}
