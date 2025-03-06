#include <stdio.h>
int main()
{
    int a,b,c;
    c=(float)a/b+0.5;
    while(scanf("%d %d",&a, &b) != EOF)
    {
    	if(b!=0)
    	printf("%d\n",c);
    	else
    	printf("error\n");
    }
	return 0;
}
