#include<stdio.h>
int main()
{
 int a,b,c;
 while((scanf("%d %d",&a,&b))!=EOF)
 {if(b==0)
 {printf("error\n");
 continue;}
if(a<b&&a*2<b)
	 c=a/b;
 if(a<b&&a*2>=b)
	 c=1;
 if(a>b&&(a%b)*2>=b)
	 c=a/b+1;
 if(a>b&&(a%b)*2<b)
	 c=a/b;
 printf("%d\n",c);}
 return 0;
}
