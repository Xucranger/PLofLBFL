#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    loop1:while(cin>>a>>b)
    {
        if(b==0)
        {cout<<"error"<<endl;goto loop1;}
        c=a/b;
        d=a%b;
        if(d*2>=b)cout<<c+1<<endl;
        else if(d*2<b)cout<<c<<endl;
    }
    return 0;
}
