#include<stdio.h>
int main()
{int a,b,c;
while(scanf("%d %d",&a,&b)!=EOF){
if(b==0)printf("ERROR");
else c=a/b+0.5;
printf("%d\n",c);}
return 0;}
