#include<stdio.h>
void main()
{
	int a,b,c;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
		 printf("error\n");
	    else
		 c=(float)a/b+0.5;
		 c=(int)c;
		 printf("%d\n",c);
	}
}
