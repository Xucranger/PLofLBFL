#include<stdio.h>
int main()
{
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0){
			printf("ERROR");
			printf("\n");}
			else 
			{
				int  c;
				c=(a%b);
				if(c>=b/2.0)
					printf("%d\n",a/b+1);
				else printf("%d\n",a/b);
			}
	}
	return 0;
}
