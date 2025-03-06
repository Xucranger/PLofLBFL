#include<stdio.h>
int main()
{
        float a,b;
        int c;
        while(scanf("%f %f",&a,&b)!=EOF)
        {
        if(b!=0)
          {
           c=round(a/b);
         printf("%d\n",c);}
         else printf("error\n");
        }
return 0;
}
