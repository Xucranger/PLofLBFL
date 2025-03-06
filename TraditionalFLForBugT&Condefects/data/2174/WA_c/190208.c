#include<stdio.h>
int main()
{
int b;
float a,c;
while(scanf("%f %d",&a,&b)!=EOF)
{
    if(b==0)
    printf("error\n");
    else
      {c=a/b;
      printf("%.0f\n",c);}
}
return 0;
}
