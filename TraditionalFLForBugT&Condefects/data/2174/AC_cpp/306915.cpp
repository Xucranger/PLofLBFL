#include<stdio.h> 
int main()
{
	float a,b,c;
	int i; 
	while(scanf("%f%f",&a,&b)!=EOF) 
{
	if(b==0)
	{
	printf("error\n");
	}
	else
    {
		c=a/b;
		if(c>=0)
		{
	    	i=(int)(c+0.5);
			printf("%d \n",i);
	    }
	    if(c<0)
	    {
	    	i=(int)(c-0.5);
	    	printf("%d\n",i);
	    }
	}
}
	return 0;
}
