#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>>
using namespace std;
int main()
{
    double i,j;
    while(cin>>i>>j)
    {
        if(j==0)
            cout<<"error"<<endl;
        else
            cout<<int (i/j)<<endl;
    }
    return 0;
}
