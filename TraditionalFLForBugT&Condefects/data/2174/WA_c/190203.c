#include<stdio.h>
int main()
{
int a,b,c;
while(scanf("%d %d",&a,&b)!=EOF)
{
    if(b==0)
    printf("ERROR\n");
    else
      {c=a/b;
      printf("%d",c);}
}
return 0;
}
