#include<stdio.h>
int main()
{
    int k;
    float x,y;
    float  t;
    while(scanf("%f",&x)!=EOF)
    {
        scanf("%f",&y);
        if(y==0)
        printf("error\n");
        else{
          t=(x/y);
          k=(int)t;
        if(t-k>=0.5)
        printf("%d\n",k+1);
        else
        printf("%d\n",k);
    }        
    }       
}    
