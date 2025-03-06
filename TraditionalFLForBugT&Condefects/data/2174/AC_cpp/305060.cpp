#include <iostream>
using std::cout;
using std::endl;
using std::cin;
int main()
{
    int a, b;
    while(cin >> a >> b)
    {
        if(b==0)
            cout << "error" << endl;
        else
        {
            if ((float)a/b - a/b < 0.5)
            {
                cout << a/b << endl;
            }
            else
            {
                cout << a/b + 1 << endl;
            }
        }
//            cout << (float)a/b << endl;
    }
    return 0;
}
