#include<stdio.h>
int main()
{
	float a,b;
	int c;
	while (scanf("%d%d",&a,&b)!=EOF)
	if(b!=0)
	{
		c=a/b+0.5;
		printf("%d\n",c);
    }
    else
        printf("error\n");
}
