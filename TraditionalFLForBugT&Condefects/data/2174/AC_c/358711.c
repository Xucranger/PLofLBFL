#include<stdio.h>
int main()
{
	int a,b;
	float c;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
		printf("error\n");
		else 
		{
			c=(float)a/b;
		    int t=(int)(c+0.5);
	    	printf("%d\n",t);
		}
	}
	return 0;
}
