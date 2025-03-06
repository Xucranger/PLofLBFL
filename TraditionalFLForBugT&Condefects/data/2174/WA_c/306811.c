#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<malloc.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b==0)
            printf("error\n");
        else
        {
            c=a/b;
            d=a*10/b;
            if(d>=5&&d<10) c++;
            printf("%d\n",c);
        }
    }
    return 0;
}
