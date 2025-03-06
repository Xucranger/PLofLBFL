#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int yu;
    int ans;
    while(cin>>a>>b)
    {
        if(b==0)
        {
            cout<<"error"<<endl;
            continue;
        }
         yu=a%b;
         if(yu*2>b) yu=1;
         else yu=0;
         cout<<a/b+yu<<endl;
    }
    return 0;
}
