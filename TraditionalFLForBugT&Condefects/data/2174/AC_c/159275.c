#include<stdio.h>
#define EOF -1
#include<math.h>
int main()
{
  int a,b,c;
  while(scanf("%d%d",&a,&b)!=EOF)
  {
	if(b==0)
		printf("error\n");
	else
	{
		c=(int)(((float)a/b)+0.5);
	    printf("%d\n",c);
	}
  }
  return 0;
}
