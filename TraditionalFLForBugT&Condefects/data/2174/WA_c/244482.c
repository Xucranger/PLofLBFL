#include<stdio.h>
int main()
{
	int a[100],b[100];
	int i,c=0;
    scanf("%d%d",&a[0],&b[0]); 
    for(i=0;a[i]!=0;)
    {   i++;
        scanf("%d%d",&a[i],&b[i]);	
	}
	for(i=0;a[i]!=0;i++)
	{
		if(b[i]!=0)
		{
			c=a[i]/b[i];
		    printf("%d\n",c);
		}
		else printf("error\n");
	}
	return 0;
}
