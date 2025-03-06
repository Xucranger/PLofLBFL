#include<stdio.h>
int main()
{
    int x,y,k;
    double  t;
    while(scanf("%d",&x)!=EOF)
    {
        scanf("%d",&y);
        if(y==0)
        printf("error\n");
        else{
          k=x/y; 
        t=x/y;
        if(t-k>0.5)
        printf("%d\n",k+1);
        else
        printf("%d\n",k);
    }        
    }       
}   
