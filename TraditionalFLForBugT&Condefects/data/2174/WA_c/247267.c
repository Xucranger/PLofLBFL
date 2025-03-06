#include<stdio.h>
int main()
{
	int a,b;
	float c;
	while (scanf("%d%d",&a,&b)!=EOF)
	if(b!=0)
	{
		c=a/b;
		printf("%.2f\n",c);
    }
    else
        printf("error\n");
}
