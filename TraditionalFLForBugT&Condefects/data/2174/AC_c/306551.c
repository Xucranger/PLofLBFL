#include <stdio.h>
int main()
{
	int a,b;
	while (scanf("%d %d",&a,&b) != EOF)
	{
		if(b==0){
		printf("error\n");
		continue;
    		}
		if(a==0){
		printf("0\n");
		continue;
		}
    		int c=a%b;
    		double d=b/2.0;
    		if(c>=d)
    			printf("%d",a/b+1);
    		else
    			printf("%d",a/b);
    		printf("\n");
	}
    return 0;
}
