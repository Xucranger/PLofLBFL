#include<iostream>
using namespace std;
int main()
{int a,b;
    while(cin>>a>>b)
    {if(b==0)
     cout<<"error";
    else if((a*10/b)%10>=5)
    cout<<a/b+1;
    else
    cout<<a/b;
       cout<<endl;
    }
}
