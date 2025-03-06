#include <stdio.h>
int main()
{
int a,b,c;
float d,e,f,h;
while(scanf("%d%d",&a,&b)!=EOF)
{
if(b==0)
printf("error\n");
else	
{
e=a;
f=b;
c=a/b;
d=e/f;
h=d-c;	 
if(h>=0.5)
printf("%d\n",c+1);
if(h<0.5)
printf("%d\n",c);	
}
}
}
