#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c,f;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
		  printf("error\n");
		else
		 {
		 	c=a/b;
	        f=((a*10)/b)%10;
	        if(f>=5)
	          c=c+1;
	        else
	          c=c;
	        printf("%d\n",c);
		 }
	}
	return 0;
}
