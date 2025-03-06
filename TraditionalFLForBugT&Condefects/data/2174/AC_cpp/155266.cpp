#include<iostream>
using namespace std;
int main()
{
        int a,b;
        int t;
        while(cin >> a >> b){
                if(b==0)
                        cout<<"error"<<endl;
                else
                {
                        t=a/b;
                        if(a>=b*t+0.5*b)
                                cout<<t+1<<endl;
                        else
                                cout<<t<<endl;
                }
        }
        return 0;
}
