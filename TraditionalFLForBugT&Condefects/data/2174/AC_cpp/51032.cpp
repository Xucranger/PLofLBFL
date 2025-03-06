#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b;
    float c = 0.5,d;
    int e;
    while(cin >>a){
        cin >> b;
        if(b == 0){
            cout << "error" << endl;
        }else{
            d = a/b;
            e = d;
            if(d-e >= c){
                cout << e+1 <<endl;
            }else{
                cout << e << endl;
            }
        }
    }
    return 0;
}
