#include<stdio.h>
int main()
{
	double n=0;
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
			printf("error\n");
		else
	       { 
			n=(double)a/b-a/b;
		    if(n>=0.5)
                printf("%d\n",a/b+1);
		    else
			    printf("%d\n",a/b);
		}
	}
	return 0;
}
