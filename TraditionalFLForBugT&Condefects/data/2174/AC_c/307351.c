#include<stdio.h>
int main()
{
    int c;
    double a,b,d;
    while((scanf("%lf%lf",&a,&b))!=EOF)
    {
        if(b==0)
            printf("error\n");
        else
        {
            c=a/b;
            d=a/b;
            if((d-c)>=0.5) 
            	c++;
            printf("%d\n",c);
        }
    }
    return 0;
}
