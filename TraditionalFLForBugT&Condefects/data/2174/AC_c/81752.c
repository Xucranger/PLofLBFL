#include<stdio.h>
void check(int a,int b);
int main(void)
{
	int i=0,j=0;
	int a[100],b[100];
	while(scanf("%d %d",&a[i],&b[i])==2)
	{
		i++;
	}
    j=i-1;
	for(i=0;i<=j;i++)
		check(a[i],b[i]);
}
void check(int a,int b)
{
	float c;
	int d;
	if(b==0)
		printf("error\n");
	else
	{
	    c=(float)a/b;
	    d=a/b;
	    if(c-d>=0.5)
		    d++;
	    printf("%d\n",d);
	}
}
