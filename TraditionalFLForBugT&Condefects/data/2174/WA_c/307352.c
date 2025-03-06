#include<stdio.h>
#include<string.h>
int main()
{
	int a,b;
	int c;
	while(scanf("%d %d",&a,&b) !=EOF){
		if(b!=0){
			c=a-(a/b)*b;
		if(c>=0.5) 
			printf("%d\n",a/b+1);
		else
		    printf("%d",a/b);
		}
		else
		printf("error");
	}
	return 0;
 } 
