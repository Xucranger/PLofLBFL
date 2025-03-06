#include <stdio.h>
int main()
{
	int a,b;
	while (scanf("%d %d",&a,&b) != EOF)
	{
		if(b==0){
		printf("error");
		continue;
    		}	
    		int c=a%b;
    		double d=b/2;
    		if(c>=d)
    			printf("%d\n",a/b+1);
    		else
    			printf("%d\n",a/b);
	}
    return 0;
}
