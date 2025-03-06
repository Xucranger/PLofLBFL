#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    while(scanf("%i%i",&a,&b)!=EOF)
    {
        if(b==0)
            printf("error\n");
        else
           printf("%i\n",(int)((float)a/b+0.5));   //四舍五入 
    }
}
