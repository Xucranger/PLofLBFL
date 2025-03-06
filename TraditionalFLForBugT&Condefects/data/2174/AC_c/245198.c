#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h> 
int main()
{
	int a,b,c,d;
	while(scanf("%d%d",&a,&b)!=EOF){
		if(b==0)
		    printf("error\n");
		else{
			c=a%b;
		    if(b%2==1)
			    d=(b+1)/2;
		    else
			    d=b/2;
	    	if(c>=d)
		        printf("%d\n",a/b+1);
		    else
		        printf("%d\n",a/b);
		}
	}
	return 0;
}
