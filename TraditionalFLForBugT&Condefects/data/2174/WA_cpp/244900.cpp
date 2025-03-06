#include<stdio.h>
int main() 
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	if(b==0)
	printf("error");
	else 
	{
	  if((a%b)>=(b/2.0))
	  c=a/b+1;
	  else
	  c=a/b;
	  printf("%d",c);
    }
}
