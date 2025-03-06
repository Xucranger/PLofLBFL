#include<stdio.h>
int main()
{
	int a,b,n;
	float c;
	while(scanf("%d%d",&a,&b)!=EOF){
	if(b!=0)
	{
	    n=a/b;
	    c=a*1.0/b-n;
	    if(c>=1.0/2)
    	printf("%d\n",n+1);
    	else 
    	printf("%d\n",n);
	}
	if(b==0)
	printf("error\n");
}
	return 0;
}
