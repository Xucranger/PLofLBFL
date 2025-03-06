#include<stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF)
    {
        if((a+b)>c&&(a+c)>b&&(c+b)>a)
        {
            if(a==b&&b==c)
            {
                printf("DB\n");
            }
            else if(a==b&&b!=c||a==c&&c!=a||b==c&&c!=a)
            {
                printf("DY\n");
            }
            else if(a!=b&&b!=c&&a!=c&&(a*a+b*b)==(c*c))
            {
                printf("ZJ\n");
            }
            else
            {
                printf("PT\n");
            }
        }
        else 
        {   
            printf("ERROR\n");
        }
    }
}
