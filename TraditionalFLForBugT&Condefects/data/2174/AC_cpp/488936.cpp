#include<iostream>
#include<stdio.h>
#include<math.h>
int A(int a,int b)
{
    int cc=a/b;
    float c=(float)a/(float)b;
    if(c-cc>=1.0/2)
        return cc+1;
    else
        return cc;
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
