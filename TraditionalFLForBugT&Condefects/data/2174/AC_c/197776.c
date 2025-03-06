#include<stdio.h>
int main()
{
    int a,b;
    float c;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
             if(!b)
                 printf("error\n");
             else
                 {
				 c=(float)a/b;
				 c=(int)(c+0.5); 
				 printf("%.f\n",c);
				}
     }
return 0;
}
