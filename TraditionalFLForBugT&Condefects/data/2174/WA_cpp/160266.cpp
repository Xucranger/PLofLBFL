#include <iostream>
using namespace std;
int main()
{
    int a,b,c2;
    float c1;
    while(cin>>a>>b)
    {
        if(b!=0)
        {
            c1=(float)a/b;
            c2=a/b;
            if(c1-c2>=0.5)
              cout<<c2+1<<endl;
            else
              cout<<c2<<endl;
        }
        else
          cout<<"ERROR"<<endl;
    }
    return 0;
}
