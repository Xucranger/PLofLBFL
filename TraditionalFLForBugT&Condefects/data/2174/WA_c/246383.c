#include<stdio.h>
int main()
{
    int a,b;
    float c;
    while(scanf("%d %d",&a,&b)!=EOF)
    {  if(b!=0)
       {   if(a>b)
           {    c=1.0*a/b;
                if((c*10-a/b)>=5)
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
