#include <stdio.h>
int main()
{
    int a,b,c;
    while((scanf("%d %d",&a,&b))!=EOF)
    { if(b!=0)
    { c=a%b;
         if(c>=0.5*b)
            printf("%d\n",(a/b)+1);
        else printf("%d\n",a/b);}
    else printf("error\n");
    }
}
