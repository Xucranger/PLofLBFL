#include<stdio.h>
int main()
{
     int a,b,c;
    float m;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b==0)
        {
            printf("error\n");
        }
        else
        {
            c=a/b;
            m=(float)a/(float)b-c;
            if((m*10)>=5)
            {
                c++;
            }
            printf("%d\n",c);
        }    
    }             
}                
