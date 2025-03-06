#include<stdio.h>
int main()
{
    int a,b;
    float s;
    while(scanf("%d%d",&a,&b)!=EOF)
     {
         if(b!=0)
           {s=a%b;
            if(s>=0.5)
            printf("%d\n",a/b+1);
           }
         else
            printf("error\n");
     }
     return 0;
}
