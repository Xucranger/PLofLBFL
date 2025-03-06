#include<stdio.h>
int main()
{
      int a,b;
      float c;
     while(scanf("%d%d",&a,&b)!=EOF)
    {
             if(b!=0)
			 {	 c=(float)a/b;
	 int i=(int)(c + 0.5);
     printf("%d\n",i);}
     else
		 printf("error\n");}
return 0;}
