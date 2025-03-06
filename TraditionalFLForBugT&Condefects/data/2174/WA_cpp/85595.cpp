#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    int a[10][2];
    int i,j;
    for(i=0;i<10;i++)
    {
        for(j=0;j<2;j++)
        {
             cin>>a[i][j];
             cout<<'\t';
        }
        cout<<'\n';
    }
    for(i=0;i<10;i++)
    {
        if(a[i][1]!=0)
        cout<<setprecision(1)<<a[i][0]/a[i][1];
        if(a[i][1]=0)
        cout<<"error";
    }
    return 0;
}
