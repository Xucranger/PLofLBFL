#include <stdio.h>
int main()
{
    int i=0,a,b;
    float c=0.00;
    while(scanf("%d %d",&a,&b)!=EOF){
    if(b==0)printf("error\n");
    else
     {
         c=c+(a*1.0/b);
         printf("%.0f\n",c);
     }
    }
}
