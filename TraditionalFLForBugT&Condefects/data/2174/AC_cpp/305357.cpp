#include<iostream>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if(b==0)
        {
            cout<<"error"<<endl;
            continue;
        }
        int bet;
        bet=(a*10/b)%10;
        if(bet>=5)
        {
            cout<<(a/b)+1<<endl;
        }
        else
            cout<<a/b<<endl;
    }
    return 0;
}
