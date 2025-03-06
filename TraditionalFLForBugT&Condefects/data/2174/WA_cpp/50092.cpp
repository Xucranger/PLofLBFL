#include<iostream>
using namespace std;
int main()
{
float a,b;
while(cin>>a>>b)
if(b==0)
{
        cout<<"error";
}
else
{
    float d=a/b;
    int n;
    n=int(d);
    float s=10*d;
    int m;
    m=int(s);
    m=m%10;
    if(m>=5)
cout<<n+1<<endl;
else
cout<<n<<endl;
}   
return 0;
}
