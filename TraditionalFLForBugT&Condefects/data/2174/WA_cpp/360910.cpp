#include<stdio.h>
int main()
{
      long a,b;
   while(  scanf("%d%d",&a,&b)==2){
             if(b==0)
                 printf("error\n");
             else
                 printf("%d\n",a/b);}
return 0;
}
