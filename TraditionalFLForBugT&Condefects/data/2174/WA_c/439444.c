#include<stdio.h>
int main()
{
	int a,b,n;
	while(scanf("%d%d",&a,&b)!=EOF){
	if(b!=0)
	{
	    n=a/b;
    	printf("%d\n",n);
	}
	if(b==0)
	printf("error\n");
}
	return 0;
}
