#include<stdio.h>
int main()
{
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF){
	if(b==0)
	{
	printf("error\n");
	} 
	else{
	float sum=1.0*a/b;int p=a/b; 
	sum=sum*10;
	int q=sum;
	q=q%10;
	if(q>=5)
	p=p+1;
	else;
		printf("%d\n",p);
	}}
}
