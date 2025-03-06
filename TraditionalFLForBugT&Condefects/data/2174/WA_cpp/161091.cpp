#include <iostream>
using namespace std;
int main()
{
    int a,b;
    while(cin >> a >> b)
    {
        if( b == 0)
            cout << "error" << endl;
        else
        {    
            int c;
            c = a/b;
            cout << c << endl;
        }
    }
    return 0;
}
