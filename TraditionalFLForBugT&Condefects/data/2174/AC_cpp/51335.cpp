#include<iostream>
#include<cmath>
using namespace std;
void input()
{
    float a,b,c;
    while(cin>>a>>b)
    {
        if(b==0)
        cout<<"error"<<endl;
        else
        {
            c=a/b;
            c=floor(c+0.5);
            cout<<c<<endl;  
        }     
    }
}
int main()
{
    input();
    return 0;
}
