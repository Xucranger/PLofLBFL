#include<iostream>
using namespace std;
int main(){
    int a,b;
    while(cin>>a>>b){
        if(b==0)
        cout<<"error"<<endl;
        else{
            int c=a/b;
            double d=(double)a/b;
            if(d-c>=0.5)
            cout<<c+1<<endl;
            else 
            cout<<c<<endl;
        }
    }
    return 0;
}            
