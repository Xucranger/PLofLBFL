#include <iostream>
using namespace std;
int main()
{
    double a,b,c;
    while(cin >> a >> b)
    {
        if( b == 0)
            cout << "error" << endl;
        else
        {
            int x;
            c = a/b;
            x = (int)(c + 0.5);
            cout << x << endl;
        }
    }
    return 0;
}
