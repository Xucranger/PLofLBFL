#include<stdio.h>
int main()
{
	int a,b,s;
	float n,c; 
	while(scanf("%d %d",&a,&b)!=EOF);
	{
		if(b==0)
		printf("error");
		if(b!=0)
		{
			s=a/b;
			n=(float)a/b;
			c=n-s;
				if(c>=0.5)
				{
					s=s+1;
					printf("%d",s);
				}
				else
				printf("%d",s);		
		} 
	}
return 0;
}
