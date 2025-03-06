#include<stdio.h>
#include <string.h>
#include<math.h> 
int main()
{
	int a,b,c;
    while(~scanf("%d %d",&a,&b))
    {
    	c=a+b;
    	if(a==11&&b<10||b==11&&a<10) printf("Game Over\n");
    	else if(a>=10&&b>=10) {
    		                     if(abs(a-b)==2) printf("Game Over\n");
    		                     else if(c%4==1||c%4==0) printf("A\n");
    		                     else if(c%4==2||c%4==3) printf("B\n");
								}
		else {if(c%4==1||c%4==0) printf("A\n");
    		  if(c%4==2||c%4==3) printf("B\n");
		}						
	}
}
