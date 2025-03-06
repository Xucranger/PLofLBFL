#include<iostream>
using namespace std;
int main()
{
    int a,b;
    double t;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b==0)
        cout<<"error"<<endl;
        else
        {
            t=(double)a/(double)b;
            t=t-a/b;
            if(t>=0.5)
            cout<<a/b+1<<endl;
            else
            cout<<a/b<<endl;
        } 
    }    
}    
