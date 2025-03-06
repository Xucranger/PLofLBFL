#include <stdio.h>
#include <iostream>
using namespace std;
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
