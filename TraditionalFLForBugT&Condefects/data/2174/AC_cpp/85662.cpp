#include<iostream>
using namespace std;
int main()
{
    float a,b;
    int s;
    while(cin>>a>>b)
    {
    if(b==0)
    cout<<"error"<<endl;
    else
    {
        s=int(a/b+0.5);
    cout<<s<<endl;
    }
    }
return 0;
}
