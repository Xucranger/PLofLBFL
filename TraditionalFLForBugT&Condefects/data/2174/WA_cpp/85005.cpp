#include<stdio.h>
int main()
{
	int a,b,c;
	float d,e;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
	   if(b==0)
          printf("error\n");
       else
          d=a/b;
          e=d+0.5;
	      c=int(e);
	      printf("%d\n",c);
	}
	return 0;
}
