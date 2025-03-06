#include<iostream>
using namespace std;
int main()
{
    float a,b,s;
    int n;
    while(cin>>a>>b)
    {
        if(b==0) cout<<"error"<<endl;
        else {
                s=a/b;
                n=(s*10+5)/10;
                cout<<n<<endl;
             }
    }
    return 0;
}
