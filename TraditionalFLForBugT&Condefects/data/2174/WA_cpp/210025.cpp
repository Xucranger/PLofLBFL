#include<stdio.h>
int main()
{
    int x,y;
    int  t;
    while(scanf("%d",&x)!=EOF)
    {
        scanf("%d",&y);
        if(y==0)
        printf("error\n");
        else{
        t=x/y;
        printf("%d\n",t);
    }        
    }       
} 
