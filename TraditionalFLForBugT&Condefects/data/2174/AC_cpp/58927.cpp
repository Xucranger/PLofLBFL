#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <cstdio>
using namespace std;
int main () {
    //freopen("list.txt","r",stdin);
    int a,b;
    while (cin >> a >> b) {
        if (b==0) cout << "error" << endl;
        else 
        cout << int(a*1.0 / b+0.5) << endl;
    }    
}    
