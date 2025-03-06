#include<iostream>
using namespace std;
int main()
{
	int c;
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
	  if(b!=0)
	 {  c=int(a*1.0/b+0.5);
     	printf("%d",c);
     	printf("\n");
	}
	else 
	{printf("error");
	printf("\n");}
	}
}
