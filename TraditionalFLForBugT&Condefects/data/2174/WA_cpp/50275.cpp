#include<iostream>
using namespace std;
int main()
{
    int a,b,y,x,m;
    while(cin>>a>>b)
    {
        if(b==0)
        {
            cout<<"error"<<endl;
        }
        else
        {
            x=a*10/b;
            m=a/b;
            y=x%10;
            if(y>5)
            {
                m+=1;
                cout<<m<<endl;
            }
            else
            {
                cout<<m<<endl;
            }
        }
    }
    return 0;
}
