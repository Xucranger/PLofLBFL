#include<cstdio>
#include<iostream>
using namespace std;
int main()
{      int a,b;
     while(scanf("%d%d",&a,&b)!=-1)
    {
             if(b==0)
                 printf("error\n");
             else
                 printf("%d\n",a/b);
     }
return 0;
}
