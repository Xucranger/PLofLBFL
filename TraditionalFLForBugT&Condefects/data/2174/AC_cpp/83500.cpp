#include<iostream>
using namespace std;
int main()
{
    int s;
    float a,b;
    while(cin >> a >> b)
    {
       if(b==0)
       cout << "error" << endl;
       else
       {
           s=a/b+0.5;
           cout << s << endl;
       }
    }
    return 0;
}
