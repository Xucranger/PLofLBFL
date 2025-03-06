#include<iostream>
using namespace std;
int main()
{
    float a,b;
    int y;
    while(cin >> a >> b)
    {
        if(b==0)
        cout << "error" <<endl;
        else
        {
        y=(a*1.0)/(b+0.5);
        cout << y <<endl;
        }
    }
    return 0;
}
