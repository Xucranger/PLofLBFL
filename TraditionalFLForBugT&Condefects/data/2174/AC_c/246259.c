#include<stdio.h>
int main()
{
	int a,b;
	double m;	
	while((scanf("%d %d",&a,&b))!=EOF) 
	{
	if(b==0)
	printf("error\n");
	else
	{
	m=((double)b*1.00)/2.;
	if(a%b<m){printf("%d\n",a/b);}
	else printf("%d\n",a/b+1);
	}
    }
	return 0;
 }
