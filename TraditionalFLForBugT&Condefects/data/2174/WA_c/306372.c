#include <stdio.h>
int main()
{
	int a,b;
	while (scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)printf("error\n");
		else
    	printf("%.f\n",a*1.0/b);
	}
    return 0;
}
