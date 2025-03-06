#include <bits/stdc++.h>
using namespace std;
#define MAX_SIZE 10000
typedef long long ll;
typedef unsigned long long ull;
typedef double db;
typedef long double ldb;
const ll MOD = 1e9 + 7;
const int INF = 0x3f3f3f3f;
const ll LL_INF = 0x3f3f3f3f3f3f3f3f;
const db PI = acos(-1.0);
const db ERR = 1e-8;
const int MAXN = 1e7;
int main(int argc, char const *argv[]){
    double a,b;
    while(cin>>a){
        cin>>b;
        if(b==0){
            cout<<"error"<<endl;
        }
        else{
            cout<<round(a/b)<<endl;
        }
    }
    return 0;
}
