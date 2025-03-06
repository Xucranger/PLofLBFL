#include<stdio.h> 
int main()
{
	float a,b,c;
	int i; 
	while(scanf("%f%f",&a,&b)!=EOF) 
{
	if(b==0)
	{
	printf("error");
	}
	else
    {
		c=a/b;
		if(c>=0)
		{
	    	i=(int)(c+0.5);
			printf("%d",i);
	    }
	    if(c<0)
	    {
	    	i=(int)(c-0.5);
	    	printf("%d",i);
	    }
	}
}
	return 0;
}
