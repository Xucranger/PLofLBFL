#include<iostream>
using namespace std;
int main()
{
    double a,b,n;
    while(cin>>a>>b)
    {
         if(b == 0)
            cout<<"error"<<endl;
         else
         {
            double t;
            t = a/b;
            int m;
            m = (int)t;
            n = t - m; 
            if(n<0.5)
               cout<<m<<endl;
            else              
               cout<<m + 1<<endl;
         }            
    }
    return 0;
}
