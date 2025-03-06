#include <iostream>
using namespace std;
int main()
{
    double a, b;
    while(cin >> a >> b)
    {
        if (b == 0)
        {
            cout << "error" << endl;
        }
        else
        {
            double c = a / b;
            int d = a / b;
            if (c - d >= 0.5)
            {
                ++d;
            }
            cout << d << endl;
        }
    }
    return 0;
}
