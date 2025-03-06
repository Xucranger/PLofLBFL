#include<stdio.h>
int main(void)
{
    int a,b;
    float c;
    while(scanf("%d %d",&a,&b)!=EOF)
     {
        if(b==0) printf("error\n");
         else
         {
             c=a*1.0/b;
            if(((int)(c*10))%10>=5) printf("%d\n",(int)(c)+1);
            else printf("%d\n",(int)(c));
         }
     }
    return 0;
}
