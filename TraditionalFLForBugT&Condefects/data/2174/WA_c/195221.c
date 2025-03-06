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
int w=10,u;
for(int l=0;l<6;l++)
{
	u=k%w;
	if(u/5>0) k+=w;
	w=w*10;
}
k=k/1000000;
printf("%d\n",k);
	}
	return 0;
}
