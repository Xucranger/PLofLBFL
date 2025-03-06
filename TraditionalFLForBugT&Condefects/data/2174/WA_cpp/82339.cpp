#include<stdio.h>
int main()
{
	int c;
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF)
	{if(b!=0)
	 {  c=int(a*1.0/b+0.5);
     	printf("%d",c);
	}
	else 
	printf("error");}
}
