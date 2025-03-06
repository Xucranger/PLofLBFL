#include<stdio.h>
int main()
{
	int a,b,ans;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
	if(b==0)
	{
		printf("error\n");
	 } 
	 else
	 {
	 	ans=(float)a/b+0.5;
	 	printf("%d\n",ans);
	 }
}
	 return 0;
}
