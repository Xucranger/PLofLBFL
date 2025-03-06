#include<stdio.h>
int main()
{
    int a,b;
    float c;
    int result;
    while(scanf("%d%d",&a,&b)!=EOF)
     {
         if(b==0)
            printf("error\n");
         else
         {
             result=a/b;
             c=(float)a/(float)b;
             if((c-result)>=0.5)
                result=(a/b)+1;
             printf("%d\n",result);
         }
     }
}
