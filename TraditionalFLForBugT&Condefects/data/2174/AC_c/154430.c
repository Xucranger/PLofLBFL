#include<stdio.h>
void main()
{
float a,b;
int c,d;
while(scanf("%f %f",&a,&b)!=EOF)
{
c=a/b+0.5;
d=a/b;
if(b==0)  printf("error\n");else  printf("%d\n",c);
}
}
