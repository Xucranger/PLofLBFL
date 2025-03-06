#include<iostream>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if(b==0)
        {cout<<"error"<<endl;}
        else
        {int w=a*10/b;
        int m=w%10;
        w=(w-m)/10;
        if(m>=5)
        {
            w++;
        }
        cout<<w<<endl;
        }
    }
}
