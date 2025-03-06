#include<stdio.h>
#include<stdlib.h>
int main()
{
      int a,b,d ;
      float c;
     //scanf("%d %d",&a,&b); 
     while(scanf("%d %d",&a,&b)!=-1)
    {
             if(b==0)
             {
                 printf("error\n");
             }
             else
             {
                 c=(float)a/b;
                 d=c+0.5;
				 //d=(int)((c+0.5)>(int)c?(int)c+1:(int)c);
                 printf("%d\n",d);//四舍五入 加上0.5 舍去小数 
             }
     }
}
