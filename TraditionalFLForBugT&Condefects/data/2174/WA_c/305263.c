#include<stdio.h>
int main()
{
	int a,b,c;
	float d,e;
	while(scanf("%d %d",&a,&b)!=EOF)
		if(b==0)
		printf("error");
		else
		{
		  c=a/b;
		  d=(float)a/b;
		  e=(float)d-c;
		  if(e>=0.5)
		  printf("%d\n",c+1);
		  else 
		  printf("%d\n",c);
	    } 
	return 0;
}
