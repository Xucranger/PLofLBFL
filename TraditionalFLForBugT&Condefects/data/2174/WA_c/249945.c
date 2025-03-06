#include<stdio.h>
int main()
{
	int t;
	float a,b,c;
	while(scanf("%d%d",&a,&b)!=EOF)
	{ 
	  c=a/b+0.5;
	  t=(int)c;
	  if(t==0)
	  printf("error\n");
	  if(t!=0)
	  printf("%d\n",t);	
	} 
}
