#include<bits/stdc++.h>
using namespace std;
int a,b;
int main()
{
    while(scanf("%d%d",&a,&b)!=EOF)
    {if(b==0)
        {cout<<"error"<<endl;continue;}
    cout<<round(a*1.0/b)<<endl;
    }
    return 0;
}
