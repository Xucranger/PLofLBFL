#include<iostream>
using namespace std;
void out(){
  int x,y,t;float w,f;
  while(cin>>x>>y){
    if(y==0){cout<<"error"<<endl;}
    else{ 
        t = x/y;
        w = x%y;
        f = w/y;
        if(f>=0.5){cout<<t+1<<endl;}
        else cout<<t<<endl; 
        }               
  }     
}
int main(){
  out();
  return 0;    
} 
