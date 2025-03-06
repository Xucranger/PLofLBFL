#include<iostream>
using namespace std;
int main(){
    double a,b;
    int c;
    while(cin >> a >> b){
              if(b == 0){
                   cout << "error" << endl;
              }
              else{
                   c = int(a/b);
                   double d = a/b;
                   double e = double(d - c);
                   if(e < 0.5){
                        cout << c << endl;
                        }
                        else{
                        cout << c + 1 << endl;     
                        }
              }
    }
    return 0;
}
