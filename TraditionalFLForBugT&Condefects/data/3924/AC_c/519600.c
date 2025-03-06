#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	while(~scanf("%d%d",&a,&b))
	{
		c=a+b; 
		if(a==11&&b<=9) printf("Game Over\n");
		if(b==11&&a<=9) printf("Game Over\n");
		if(a>11&&a-b>=2) printf("Game Over\n");
		if(b>11&&b-a>=2) printf("Game Over\n");
		if(a<11&&b<11)
		{
			if(c%4==0||c%4==1) printf("A\n");
			if(c%4==2||c%4==3) printf("B\n");
		}
		if(a>=10&&b>=10&&fabs(a-b)<2) 
		{
			if(c%2==0) printf("A\n");
			if(c%2==1) printf("B\n");
		 } 
	}
	return 0;
 } 
