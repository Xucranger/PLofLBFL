#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b)
    {
            int x;
            if(b==0)
            {
                    cout<<"error"<<endl;
                    continue;
            }
            c=a/b;
            x=round(c);
            cout<<x<<endl;
    }
    return 0;
}
