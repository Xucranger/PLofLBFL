#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    float temp;
    while (cin >> a >> b)
    {
        if (b == 0)
            cout << "error" << endl;
        else
        {
            temp = a*1.0/b;
            c = (int)(temp+0.5);
            cout << c << endl;
        }
    }
}
