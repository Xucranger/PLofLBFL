#include<stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d %d",&a,&b)!=EOF)
    {  if(b!=0)
       {   if(a>b)
           {    c=a%b;
                if(c*10/b>4)
                  printf("%d\n",(a/b)+1);
                else
                  printf("%d\n",a/b);
           }
            else
                 printf("%d\n",a/b);
       }
       else
         printf("error\n");
    }
    return 0;
}
