#include<stdio.h>
int main()
{
	int a,b,dev,sec,y;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
		printf("error\n");
		else
		{
			dev=a/b;
			sec=a%b;
			if(sec==0)
			printf("%d\n",dev);
			else
			{
			  if(sec>0&&b>sec*2)
			  printf("%d\n",dev);
			  else
			  printf("%d\n",dev+1); 
			}	
		}
	}
}
