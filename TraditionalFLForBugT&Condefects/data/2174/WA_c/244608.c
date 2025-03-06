#include<stdio.h>
int main()
{
	int a,b,i=0,j=0;
	int c[100];
	while((scanf("%d%d",&a,&b))!=EOF)
	{
	if(b==0)
	c[i]=-1;
	else
	c[i]=a/b;
	i++;
	j++;
	}
	for(i=0;i<j;i++)
	{
		if(c[i]==-1)
		printf("error\n");
		else
		printf("%d\n",c[i]);
	}
	return 0;
}
