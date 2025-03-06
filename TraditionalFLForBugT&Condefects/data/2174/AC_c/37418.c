#include<stdio.h>
void main()
{
    float a,b;
    int c;
    while(scanf("%f %f",&a,&b)!=EOF)
    {
       c=(a/b)+0.5;
       if(b==0)
       printf("error\n");
       else
       printf("%d\n",c);                      
    }   
}
