#include <iostream>
using namespace std;
int main() {
    double a,b,c;
    while(cin>>a>>b)
    {
        if(b==0)
        {
            cout<<"error"<<endl;
            continue;
        }
        c=a/b+0.5;
        cout<<(int)c<<endl;
    }
    return 0;
}
