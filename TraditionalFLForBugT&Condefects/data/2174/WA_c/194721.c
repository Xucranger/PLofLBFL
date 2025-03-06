#include<stdio.h>
int main()
{
	int a[100];
	int i;
	for(i=0;a[i]!='\0';i=i+2)
	{
	   scanf("%d %d",&a[i],&a[i+1]);
	   printf("\n");
    }
    for(i=0;a[i]!='\0';i=i+2)
    {
    	if(a[i+1]==0)
    	printf("error");
    	else
    	printf("%d",a[i]/a[i+1]);
    }
    return 0;
}
