#include<stdio.h>
void main()
{ 
	float a,b;
	int c;
    while(~scanf("%d%d",&a,&b))
	{   
		if(b==0)
			printf("error\n");
	    else if(a<0&&b<0)
			printf("%d\n",a/b+1);
		else if(a<0&&b>0)
            printf("%d\n",a/b-1);
		else 
		{	c=(int)(a/b);
		if(a/b>=(c+0.5))
			printf("%d\n",c+1);
		else
			printf("%d\n",c);}
	}
}
