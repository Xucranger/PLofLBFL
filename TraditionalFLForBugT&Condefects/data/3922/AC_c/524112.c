#include<stdio.h>
#include <string.h>
#include<math.h> 
int main()
{
	float a,b,c=0;
	int d;
    while(~scanf("%f %f",&a,&b))
    {   
		if(b==0) printf("error\n");
		else {
		      c=a/b;
		      d=c+0.5;
		      printf("%d\n",d);   
		     }    
	}
}
