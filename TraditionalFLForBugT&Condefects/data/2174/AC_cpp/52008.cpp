#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double  a, b;
    while(cin >> a >> b){
        double s = a / b;
        if(b == 0){
            cout << "error" << endl;
        }
        else{
            cout << floor(s + 0.5) << endl;
        }
    }
    return 0;
}
