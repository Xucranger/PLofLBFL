#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    double a,b,c;
    while (scanf("%lf%lf",&a,&b)!=EOF)
    {
       if(b==0) {printf("error\n");continue;}
       c=a/b+0.5;
       printf("%d\n",(int)c);
    }
    return 0;
}
