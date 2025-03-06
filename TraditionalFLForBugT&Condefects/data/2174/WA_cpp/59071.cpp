#include <iostream>
using namespace std;
void Division(int ,int  );
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        Division(a,b);
    }
}
void Division(int a,int b)
{
    if(b==0)
    {
        cout<<"error"<<endl;
    }
    else
    {
        cout<<a/b<<endl;
    }
}
