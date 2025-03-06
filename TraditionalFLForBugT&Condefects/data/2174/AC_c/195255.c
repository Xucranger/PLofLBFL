#include<stdio.h>
int main()
{
	int a,b;
	while(scanf("%d%d",&a,&b)==2)
	{
		if(!b)
		{
			printf("error\n");
			continue;
}
double z;
z=a/(double)b;
int k=z*1000000;
int w=10,u,yy=k;
for(int l=0;l<6;l++)
{
	u=yy%10;
//	printf("$$%d ",u);
	if(u/5>0)
	{
		 k+=w;
	}
	yy=k;
		 for(int j=0;j<l+1;j++)
		 yy=yy/10;
	w=w*10;
//	printf("%d ",k);
}
k=k/1000000;
printf("%d\n",k);
	}
	return 0;
}
