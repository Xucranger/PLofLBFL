#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int main()
{
      int c;
      float a,b;
     //scanf("%d %d",&a,&b); 
     while(scanf("%f %f",&a,&b)!=-1)
    {
             if(!b)
                 printf("error\n");
             else
                 c=(int)a/b+0.5;
				 //d=(int)((c+0.5)>(int)c?(int)c+1:(int)c);
                 printf("%d\n",c);//四舍五入 加上0.5 舍去小数 
     }
return 0;
}
