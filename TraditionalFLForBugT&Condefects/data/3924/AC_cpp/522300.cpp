#include <stdio.h>
#include <iostream>
using namespace std;
int sushu(int n){
int i;
int a;
   for(i=1;i<n;i++){
 if(n%i==0&&n>2)
	return 0;
	else
	return 1;
}}
int zuida(int n,int m){
int c=m;
	while(n%m!=0)
	{
		c = n%m;
		n = m;
		m = c;}
		return c;
}
int main(int argc, char *argv[])
{
    int a, b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if((a==11||b==11)&&(11-a>=2||11-b>=2))
         printf("Game Over\n");
        else
		{if(a>=10&&b>=10)
		{
			if(a-b==2||b-a==2)
			printf("Game Over\n");
			else
			{
				if(a==b)
				printf("A\n");
				else
				printf("B\n");
			}
		}
        else
        {
        	if((a+b)%4<=1)
        	printf("A\n");
        	else
			printf("B\n");
        }}
    }
    return 0;
}
