#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c,d;
    float e;
    while(cin>>a>>b)
    {
        if(b==0)
            cout<<"error"<<endl;
        else
        {
            c=a/b;
            d=a-c*b;
            e=b/2.;
            if(d>=e)
                c+=1;
                cout<<c<<endl;
        }
    }
    return 0;
}
