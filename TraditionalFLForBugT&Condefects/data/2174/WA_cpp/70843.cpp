#include<iostream>
using namespace std;
int main(){
    int a,b;
    while(cin>>a>>b){
        if(b==0) cout<<"error"<<endl;
        else{
            int t=a%b,k=a/b;
            if(t>=5) k++;
            cout<<k<<endl;
        }
    }
}
