#include<iostream>
using namespace std;
int main(){
    int a,b;
    int result;
    while(cin>>a>>b){
        if(b == 0){
            cout<<"error"<<endl;
        }
        else
        {
            result = a / (b * 1.0) + 0.5;
            cout<<result<<endl;
        }
    }
    return 0;
}
