#include<stdio.h>
int main()
{
    int a,b,n;
    float m;
    while((scanf("%d %d",&a,&b))!=EOF)
    {
        if(b==0)
        printf("error\n");
        else
       { m=1.0*a/b;
        n=m+0.5;
   printf("%d\n",n);}
    } 
    return 0;   
}    
