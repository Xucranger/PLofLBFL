#include<stdio.h>
int main()
{
    int a,b,c,d;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b!=0)
		{
			c=a/b;
			d=a%b;
			if((2*d)>=b)c+=1;
			printf("%d\n",c);
		}
		else printf("error\n");
	}
    return 0;
}
