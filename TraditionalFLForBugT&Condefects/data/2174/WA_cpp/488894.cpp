#include<iostream>
#include<stdio.h>
#include<math.h>
int A(int a,int b)
{
    if(b!=0)
    return a/b;
}
using namespace std;
int main()
{
    int a,b;
    while(~scanf("%d%d",&a,&b))
    {
        if(b==0)
        printf("error\n");
        else
        printf("%d\n",A(a,b));
    }
}
