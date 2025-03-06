#include<iostream> 
#include<iomanip> 
#include<stdlib.h>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if(b==0)
            cout<<"error"<<endl;
        else
           cout<<fixed<<setprecision(0)<<(float)a/b<<endl;//
    }
    return 0;
}
