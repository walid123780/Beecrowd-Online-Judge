#include<stdio.h>
#include<stdio.h>
int main()
{
    double x1,y2,x2,y1,e,f,X;
    scanf("%lf%lf", &x1,&y1);
    scanf("%lf%lf", &x2,&y2);
    e=(x2-x1)*(x2-x1);
    f=(y2-y1)*(y2-y1);
    X=e+f;
    printf("%.4lf\n",sqrt(X));

}
