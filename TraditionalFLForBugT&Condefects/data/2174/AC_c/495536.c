#include<stdio.h>
int main()
{
	float a,b;
	while((scanf("%f%f",&a,&b))!=EOF)
	{
		float d,h;
		if(b==0)
		{
			printf("error\n");
		}
		else
		{h=a/b;
		d=(a/b)*10;
	    int c=(int)(d);
		c=c%10;
		if(c>=5)
		h++;
		printf("%d\n",(int)(h));
	    }
	}
}
