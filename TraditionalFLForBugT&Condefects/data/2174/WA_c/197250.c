#include<stdio.h>
int main()
{
	int a,b,s;
	float r,c;
	while(scanf("%d%d",&a,&b)!=EOF)	
	if(b!=0)
	{
	   s=a/b;
	   r=a/b;
	   c=r-s;
   	   if(c<0.5)
	      printf("%d\n",s);
	   else
	      printf("%d\n",s+1);
                 }
                 else
                      printf("error");
                 return 0;
}
