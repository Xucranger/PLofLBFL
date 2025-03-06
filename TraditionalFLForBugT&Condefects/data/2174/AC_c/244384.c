#include<stdio.h>
int main()
{
	int a,b,c,d;
	while(scanf("%d%d",&a,&b)!=EOF){
	if(b==0)
	printf("error\n");
	else
	{
	c=10*a/b;
	d=10*(a/b);
    if((c-d)<5)	
    	printf("%d\n",d/10);
    else
    printf("%d\n",d/10+1);
}
}
	 return 0;
}
