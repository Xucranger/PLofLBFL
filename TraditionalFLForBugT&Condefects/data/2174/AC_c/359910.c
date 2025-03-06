#include<stdio.h>
int main()
{ int a,b,t;
  float c;
  while(scanf("%d %d",&a,&b)!=EOF)
  { if(b==0)
    printf("error\n");
    else 
    {c=(float)a/b;
    c=c+0.5;
    t=(int)c;
    printf("%d\n",t);}}
    return 0;}
