# include <stdio.h>
int main()
{
	int a,b,c,d;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
	    if(b==0)
	    printf("error\n");
	    else
	    {
		c=a/b;
		d=a%b;
		if(2*d>=b)
		c=c++;
		printf("%d\n",c);
	    }
    }
    return 0;
}
