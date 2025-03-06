	#include <bits/stdc++.h>
using namespace std;
#define MAX_SIZE 10000
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
