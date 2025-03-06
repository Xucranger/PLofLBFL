#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a)
    {
        cin>>b;
        if(b==0) 
        {
                 cout<<"error"<<endl;
                 continue;
        }
        else
        {
            c=a%b;
            if(c*2>=b)
            cout<<a/b+1<<endl;
            else cout<<a/b<<endl;
        }
    }
}
