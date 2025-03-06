#include<stdio.h>
int main()
{
    int a,b;
    float c=0;
    scanf("%d %d",&a,&b);
    c=a*1./b;
    if(b==0)
      printf("error\n");
     else
        { c=(int)(c+0.5);
      printf("%d\n",c);}
}
