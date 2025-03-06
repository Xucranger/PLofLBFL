#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=a+b;
	if(c<20&&a<11&&b<11)
	{
		switch(c%4)
		{
			case 0:
		case 1:printf("A");break;
		case 2:
		case 3:printf("B");break;
		 } 
	}
	else if(c>=20&&fabs(a-b)<2)
	{
		if(c%2==1)
	printf("B");
	else printf("A");
	}
	else printf("GAME OVER");
} 
