#include <iostream>
using namespace std;
int main()
{
    int a, b;
    while(cin>>a>>b)
    {
        if(b == 0)
        {
            cout<<"error"<<endl;
            continue;
        }
        if(a < b)
        {
            cout<<"0"<<endl;
            continue;
        }
        else
        {
            //如果b是偶数
            if(b % 2 == 0)
            {
                if(a % b >= 0.5 * b)
                {
                    cout << a / b + 1 <<endl;
                }
                else
                {
                    cout<< a / b <<endl;
                }
            }
            else
            {
                if(a % b > 0.5 * b)
                {
                    cout << a / b + 1 <<endl;
                }
                else
                {
                    cout << a / b <<endl;
                }
            }
        }
    }
    return 0;
}
