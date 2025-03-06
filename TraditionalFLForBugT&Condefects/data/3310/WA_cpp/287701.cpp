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
        if(elem==0)
            printf("%.6lf",sin(elem));
        else
        {
            printf("%.6lf",getsin(elem,elem));
        }
    }
    return 0;
}
