#include <iostream>
using namespace std;
int main()
{
    float a, b;
    while (cin >> a >> b)
    {
        if (b)
        {
            int c = a / b + 0.5;
            cout << c << endl;
        }
        else
        {
            cout << "error" << endl;
        }
    }
    return 0;
}
