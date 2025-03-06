#include<stdio.h>
int main()
{
int a,b;
while(scanf("%f%f",&a,&b)!=EOF)
{if(b==0)
 printf("error\n");
 else if((a%b)/b>1/2)
 printf("%d\n",a/b+1);
 else 
 printf("%d\n",a/b);
}
return 0;
}
