#include<stdio.h>
int main()
{
float a,b;
float c;
while(scanf("%f %f",&a,&b)!=EOF)
{if(b==0)
 printf("error\n");
 else 
 c=a/b;
 printf("%d\n",(int)(c+0.5));
}
return 0;
}
