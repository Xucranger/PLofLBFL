#include<stdio.h>
int main()
{
   float a,b,c,d;
    while(scanf("%f %f",&a,&b)!=EOF)
    {
        if(b==0) {printf("error\n");}
        else
        {
        c=a/b;
        d=(int)(c+0.5);
        printf("%.0f\n",d);}
    }
}
