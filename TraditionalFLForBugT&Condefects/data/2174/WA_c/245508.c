#include<stdio.h>
int main()
{int a,b,c,d,e,f,g;
while(scanf("%d%d",&a,&b)!=EOF)
{if(b==0) printf("error\n");
else {if(10*a/b%10>=5) printf("%d\n",a/b+1);
else printf("%d",a/b);}
}
return 0;
}
