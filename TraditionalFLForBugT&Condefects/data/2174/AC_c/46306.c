#include<stdio.h>
int main()
{
    int a,b;
    while((scanf("%d%d",&a,&b))!=EOF)
    {
        int r;
        if(b==0)
        printf("error\n");
        else 
        {
            r=a%b;
            if(r==0)
            {
                printf("%d\n",a/b); 
            }
            else
            {
                if(2*r<b)
                printf("%d\n",a/b);
                else
                printf("%d\n",a/b+1);
            }
        }
    } 
    return 0;
} 
