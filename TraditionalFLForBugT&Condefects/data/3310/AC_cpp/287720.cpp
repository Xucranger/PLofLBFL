#include<iostream>
#include<math.h>
#include<cstdio>
double getsin(int elem,int yuan)
{
    if(elem==0)
        return sin(yuan);
    return sin(getsin(elem-1,yuan));
}
using namespace std;
int main()
{
    int elem;
    while(cin>>elem)
    {
        printf("%.6lf\n",getsin(elem,elem));
    }
    return 0;
}
