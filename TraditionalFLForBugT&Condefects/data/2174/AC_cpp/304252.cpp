#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    while (cin >> a >> b) {
        if (b == 0)
            cout << "error" << endl;
        else {
            double ans = 1.0 * a / b;
            cout << round(ans) << endl;
        }
    }
    return 0;
}
