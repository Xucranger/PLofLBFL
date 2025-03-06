#include<stdio.h>
#define EOF -1 
int main()
{
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF)
        {
              if(b==0)
		           printf("error\n");
         	  else
		           printf("%d\n",(a+(b/2))/b);
        }
	return 0;
}
