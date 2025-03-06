#include <iostream>
using namespace std;
int main()
{
    int a, b;
    while(cin >> a >> b)
    {
        if(b == 0)
            cout << "error" << endl;
        else
        {
            int ans = (a+(b/2))/b;
            cout << ans << endl;
        }
    }
    return 0;
}
