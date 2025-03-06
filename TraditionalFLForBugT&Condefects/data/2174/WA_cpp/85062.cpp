#include<iostream>
using namespace std;
int main()
{
    int i,n,a,s;
    cin>>n;
    a=0;
    s=0;
    for(i=1;i<=n;i++)
    {
        s=a+i;
        a=s;
    }
    cout<<s<<endl;
    return 0;
} 
