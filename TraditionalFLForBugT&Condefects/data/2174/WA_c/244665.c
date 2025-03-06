#include<stdio.h>
int main()
{
	float a,b,c;
	int s;
	while((scanf("%f%f",&a,&b))!=EOF)
	{
		if(b==0)
		printf("error");
		else
		{
			c=a/b;
			if((int)(c*10)%10>=5)
			{
				s=(int)(c+1);
				printf("%d",s);
			}
			else if((int)(c*10)%10<5)
			{
				s=(int)c;
				printf("%d\n",s);
			}
		}
	}
	return 0;
 } 
