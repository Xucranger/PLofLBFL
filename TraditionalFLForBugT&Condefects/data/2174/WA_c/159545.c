#include<stdio.h>
int main()
{
	int a,b;
	int i;
	while(scanf("%d %d",&a,&b)!=EOF){
		if(b!=0)
		{
			if(a>=b)
			{
				i=a%b;
				if(i*10>=b*5)
					i=a/b+1;
				else i=a/b;
			}
			else 
			{
				if(a*10>=b*5)
					i=1;
				else i=0;
			}
		printf("%d",i);
		}
		else printf("error");
	}
	return 0;
}
