#include<stdio.h>
int main()
{int a,b,c,d,e;while(scanf("%d %d",&a,&b)!=EOF)
{if(b!=0){c=a%b;if(2*c<b){d=a/b;printf("%d\n",d);}else {e=a/b+1;printf("%d\n",e);}}
else printf("error\n");}return 0;}
