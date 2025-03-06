#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(b==0)
        {
            cout<<"error"<<endl;
            continue;
        }
        int c=a*1.0/b*10;
        if(c%10<5)
            cout<<c/10<<endl;
        else
            cout<<c/10+1<<endl;
    }
    return 0;
}
