#include<stdio.h>
int main()
{
int a,b,e;
while(scanf("%d %d",&a,&b)!=EOF)
if(b!=0)
{
e=(a+(b/2))/b;
printf("%d\n",e);
}
elshttp://www.buctcoder.com/JudgeOnline/problem.php?cid=1374&pid=3e
printf("error\n");
return 0;
}
