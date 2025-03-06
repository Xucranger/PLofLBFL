#include<stdio.h>
int main()
{
    int a,b,i,j;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(b==0)
        printf("error\n");
        else
        {
            i=a/b;
            j=a%b;
            if(j*2<b)
            printf("%d\n",i);
            else
            {
                i=i+1;
                printf("%d\n",i);
            }
        }
    }
}                
