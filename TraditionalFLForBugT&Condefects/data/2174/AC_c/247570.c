#include<stdio.h>
int main()
{   int a,b,i;
int sishe(int a,int b);
 	while(scanf("%d %d",&a,&b)!=EOF)
 	{if(b==0)
 	 printf("error\n");
 	 else if(a==0)
 	 printf("%d\n",0);
 	 else if(a<0.5*b)
 	 printf("%d\n",0);
 	 else if(a>=0.5*b&&a<=b)
 	 printf("%d\n",1);
 	 else if (a>b)
 	 {i=sishe(a,b);
 	 printf("%d\n",i);
	  }
 }
	 }
	 int sishe(int a,int b)
	{double n,t;
	int m,i;
	 m=a/b;
	  n=a*1.0/b;
	  t=a*1.0/b-a/b;
	 int k[6]={t/0.1,t/0.01,t/0.001,t/0.0001,t/0.00001,t/0.000001};
	  for(i=5;i>=1;i--)
	  {if(k[i]>=5)
	   k[i-1]++;
	   else
	   ;
	  }
	  if(k[0]>=5)
	  return n+1;
	  else
	  return n;
	}
