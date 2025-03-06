#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int a,b,s;
    double t;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b==0)
        cout<<"error"<<endl;
        else
        {
            s=a/b;
            t=((double)a/(double)b)-s;
            if(t>=0.5)
            s++;
            cout<<s<<endl;
        }         
    }   
}     
