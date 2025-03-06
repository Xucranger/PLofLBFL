#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    while(cin>>a>>b)
    {
        if(b==0)
        {
            cout<<"error"<<endl;
        }
        else
        {
              c=a/b;
              int d=int (c+0.5);//四舍五入
              cout<<d<<endl;
        }
    }
    return 0;
} 
