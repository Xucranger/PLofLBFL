#include <stdio.h>
void main()
{
	int a[100],b[100];
	int shang[100],yushu[100];
	int i;
	double c[100];
	for(i=0;i<100;i++)
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
