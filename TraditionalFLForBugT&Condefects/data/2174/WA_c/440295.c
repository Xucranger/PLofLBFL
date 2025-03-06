#include<stdio.h>
int main()
{
	int a,b,c,d;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
		   printf("error\n");
		else
		{
		    c=a/b;
		    if(c>0)
		    {
			   d=(a-b*c)*10;
		       d=d/b;
		       if(d>=5)
		          c=c+1;
		    }
		    printf("%d\n",c);
		}
	}
}
