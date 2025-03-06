#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    int n;
    while(cin>>n){
    if(n < 0 || n >100) return -1;
    float temp=sin(n);
    for(int i=1; i <= n; i++){temp=sin(temp);}
    cout << fixed << setprecision(6) << temp << endl;
    }
}
