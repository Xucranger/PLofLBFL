#include<iostream>
using namespace std;
int main()
{
        int a,b;
        while(cin>>a>>b)
        {
                if(b) cout<<(int)(((float)a)/b+0.5)<<endl;
                else cout<<"error"<<endl;
        }
        return 0;
}
