#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a, b;
    double c;
    while(cin >> a >> b)
    {
        if(b == 0)
            cout << "error" << endl;
        else
        {
            c = (a*1.0) / b;
            if(floor(c + 0.5) == floor(c))
                cout << floor(c) <<endl;
            else cout << ceil(c) << endl;
        }
    }
    return 0;
}
