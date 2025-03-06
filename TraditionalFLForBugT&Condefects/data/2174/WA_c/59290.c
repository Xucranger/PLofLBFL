#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(b==0)
      printf("error\n");
     else
        { int c=0;
          c=a*1./b;
          c=(int)(c+0.5);
      printf("%d\n",c);}
}
