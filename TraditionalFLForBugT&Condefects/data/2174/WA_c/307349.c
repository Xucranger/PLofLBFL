#include<stdio.h>
int main()
{
    int a,b,c;
    double d;
    while((scanf("%d%d",&a,&b))!=EOF)
    {
        if(b==0)
            printf("error\n");
        else
        {
            c=a/b;
            d=a/b;
            if((d-c)>=0.5)
            	c++;
            else;
            printf("%d\n",c);
        }
    }
    return 0;
}
