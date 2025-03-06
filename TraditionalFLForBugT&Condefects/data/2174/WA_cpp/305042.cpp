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
            cout << 'error' << endl;
        else
            cout << a/b << endl;
    }
    return 0;
}
