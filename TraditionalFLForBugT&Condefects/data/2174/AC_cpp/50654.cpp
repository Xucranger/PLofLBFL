#include<iostream>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        int t;
        float s;
        if(b)
        { 
            t=a%b;
            s=b/2.;
            if(t<s)
            cout<<a/b<<endl;
            else
            cout<<(a/b+1)<<endl;
        }
        else
        cout<<"error"<<endl; 
    }
//    system("pause");
    return 0;
}
