#include<stdio.h>
void main()
{
	int a,b;
	double c;
	int shang,yushu;
while(scanf("%d%d",&a,&b)!=EOF)
{ 
	if(b==0)
		{
			printf("error\n");
		}
		else
		{
			shang=a/b;
			yushu=a%b;
			c=(double)yushu/(double)b;
			if(c>=0.5)
			{
				printf("%d\n",shang+1);
			}
			else
			{
				printf("%d\n",shang);
			}
		}
}
}
