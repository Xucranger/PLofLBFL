#include<stdio.h>
int main()
{
	int a,b,c;
	float d;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b!=0)
       {c=a/b;
		d=1.0*a/b;
		if(d-c>=0.5)
		{
			printf("%d\n",c+1);}
		else
		{
		printf("%d\n",c);}
        }
        else
        printf("error");
	}
	return 0;
}
