#include<stdio.h>
int main()
{
    int  a,b,c;
    while(scanf("%d%d",&a,&b)==2)
    {
        if(b==0) 
        {
            printf("error\n");
        }
        else
        {
        int c=(int)(1.0*a/b+0.5);
        printf("%d\n",c);
        }
    }
    return 0;
}
