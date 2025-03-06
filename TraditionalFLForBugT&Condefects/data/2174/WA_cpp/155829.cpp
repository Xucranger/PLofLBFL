#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int main()
{
      int a,b;
     //scanf("%d %d",&a,&b); 
     while(scanf("%d %d",&a,&b)!=-1)
    {
             if(!b)
                 printf("error\n");
             else
                 printf("%d\n",a/b);
     }
return 0;
}
