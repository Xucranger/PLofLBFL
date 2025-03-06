#include<stdio.h>
#include<math.h>
int main()
{
	char ch;
	float a[1000],b[1000],c;
	int i,j=0,d;
	for(i=0;ch!=EOF;i++)
	{
		scanf("%f%f",&a[i],&b[i]);
		ch=getchar();
		j++;
	}
	for(i=0;i<j;i++)
	{
		if(b[i]==0)
		printf("error\n");
		else
		{
			c=a[i]/b[i];
			d=round(c);
			printf("%d\n",c);
		}
	}
}
