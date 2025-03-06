#include<stdio.h>
int main()
{
    int a,b,d;
    float c;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(b)
        {
            c=a*1.0/(b*1.0);
            d=(int)c;
            if(c-d>=0.5)
                d++;
            printf("%d\n",d);
        }
        else 
            printf("error\n");        
    }    
    return 0;
}
