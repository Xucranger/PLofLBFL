#include <stdio.h>
void main()
{
	int a[10],b[10];
	int shang[10],yushu[10];
	int i;
	double c[10];
	for(i=0;i<10;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
		if(b[i]==0)
		{
			printf("error\n");
		}
		else
		{
			shang[i]=a[i]/b[i];
			yushu[i]=a[i]%b[i];
			c[i]=(double)yushu[i]/(double)b[i];
			if(c[i]>=0.5)
			{
				printf("%d\n",shang[i]+1);
			}
			else
			{
				printf("%d\n",shang[i]);
			}
		}
	}
}
