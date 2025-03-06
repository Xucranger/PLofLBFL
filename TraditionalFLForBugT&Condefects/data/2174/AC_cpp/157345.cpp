#include<iostream>
using namespace std;
int main()
{
        int a,b;
        float n;
        int m;
        while(cin>>a>>b)
        {
                if(b!=0)
                {
                        n=(float)a/b;
                        m=a/b;
                        if((n-m)<0.5)
                           cout<<m<<endl;
                     else if((n-m)>=0.5)
                        cout<<m+1<<endl;
                }
                else cout<<"error"<<endl;
        }
        return 0;
}
