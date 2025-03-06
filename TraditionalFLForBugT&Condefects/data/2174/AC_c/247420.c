#include <stdio.h>
int main()
{
	int a,b,c,f;
	float d,e;
	while(scanf("%d%d",&a,&b)!=EOF)
	if(b==0)
	printf("error\n");
	else
	{d=(float)a/b;
	 c=a/b;
	 e=d-c;
	 if(e>=0.5)
	 {f=c+1;
	  printf("%d\n",f);}
	 else
	 printf("%d\n",c);}
}
