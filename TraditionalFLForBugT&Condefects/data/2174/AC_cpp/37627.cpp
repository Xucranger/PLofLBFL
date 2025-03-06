#include<iostream>
using namespace std;
int main()
{
    int a,b,yushu;
    while(cin>>a>>b)
    {
                    if(b==0)cout<<"error"<<endl;
                    else 
                    {
                    yushu=a%b;                    
                    if((yushu*1.0/b)>=0.5)cout<<a/b+1<<endl;
                    else cout<<a/b<<endl;
                    }
    }
    return 0;
}
