#include<iostream>
using namespace std;
int main()
{
    float a,b;
    float c;
    while(cin>>a>>b)
    {
        if(b==0)
            cout<<"error"<<endl;
        else
        {
            c=a/b;
            if(c<0.5)
                cout<<'0'<<endl;
            else if(c>=0.5)
            {
                int m;
                m=c;
                if(c-m>=0.5)
                {
                    cout<<m+1<<endl;
                }
                else if(c-m<0.5)
                {
                    cout<<m<<endl;
                }
            }
            //cout<<c<<endl;
        }
    }
    return 0;
}
