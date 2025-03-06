#include<stdio.h>
int main()
{
   int a,b,d;
  double c; 
   while(scanf("%d%d",&a,&b)!=EOF)
 {
 	if(b==0)
 	printf("error\n");
 	else 
	 {d=a/b;
	 c=(double)a/b;
	 if((c-d)>=0.5)
	   d=d+1;
	 printf("%d\n",d);
	}
  }   
} 
