#include <iostream>
using namespace std;
using std::cout;
using std::cin;
int main()
{
int a,b;
int c;
cin>>a>>b;
do
{   
    if(b==0)
        cout<<"error\n";
    else
    {c=a*1.0/b+0.5;
    cout<< c <<"\n";}
}while(cin >> a >> b);
return c;
}
