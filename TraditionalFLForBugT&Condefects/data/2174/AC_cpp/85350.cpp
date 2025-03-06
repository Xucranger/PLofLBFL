#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,x;
    while(cin >> a >> b)
        {
            if(b==0)
            cout<<"error"<<endl;
            else
                {
                    c=a/b;
                    d=a%b;
                    x=2*d/b;
                    if(x>=1)
                        c=c++;
                    cout<<c<<endl;
                 }
        }
        return 0;
}
