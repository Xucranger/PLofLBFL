#include<stdio.h>
int main()
{  
	float a,b;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0) printf("error\n");
		else{
		  int c=a/b;
		  float d=a/b-c;
		  if(d>=0.5) c++;
		  printf("%d\n",c);
		}
	}
}
