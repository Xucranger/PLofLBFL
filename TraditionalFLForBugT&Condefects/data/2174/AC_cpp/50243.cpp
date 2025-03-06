#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c,d;
    while(cin>>a>>b)
    {
            int x;
            double y;
            if(b==0)
            {
                    cout<<"error"<<endl;
                    continue;
            }
            c=a/b;
            x=c/1;
            y=c-x;
            if(y<0.5)
            cout<<x<<endl;
            else
            cout<<x+1<<endl;
    }
    return 0;
}
