#include<stdio.h>
int main()
{
	int a,b,s;
	while(scanf("%d %d",&a,&b)!=EOF){
	if(b==0)
		printf("error\n");
	else 
	{s=a/b;
	if((a-s*b)*2>=b)
	s++;
	printf("%d\n",s);}}
	return 0;
	}
