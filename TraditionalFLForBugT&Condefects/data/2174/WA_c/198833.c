#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,i=1;
	int x[10][10]; 
	float s;
	while (scanf("%d %d",&a,&b)!=EOF) 
    {
	    if(b==0)
		{
			printf("error");
		}
		else 
		{
		    s=a/b+0.5;
		    printf("%d",(int)s);
	    }	
	}
	return 0; 
 } 
