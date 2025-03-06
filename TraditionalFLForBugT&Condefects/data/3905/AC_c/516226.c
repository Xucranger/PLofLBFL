#include<stdio.h>
int main()
{
	int n,i=1,a,b,c=0,d;
	scanf("%d",&n);
	while(i<=n)
	{
	scanf("%d",&a);
	 d=a;
	 c=0;
		while(d>=1)
		{
		  scanf("%d",&b);
		  c=b+c;
		  d=d-1;}
	    printf("%d\n",c);
	 i=i+1;
	}
	return 0; 
}
