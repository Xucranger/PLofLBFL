#include<iostream>
using namespace std;
int main(){
int a;
int b;
int judge=1;
int result;
while(cin>>a>>b){	
if(a<=9&&b<=9){
if((a+b)%2==0){   //Å¼ 
if(((a+b)/2)%2==0)
 cout<<"A"<<endl;
else
  cout<<"B"<<endl;
}
else if(((a+b-1)/2)%2==0) //Ææ 
cout<<"A"<<endl;
else
cout<<"B"<<endl;
}
else 
if(a==11&&b<=9||b==11&&a<=9)
cout<<"Game Over"<<endl;
else if(a>=10&&b>=10){
if(a-b==2||b-a==2){
cout<<"Game Over"<<endl;
}
else if(a==b)
cout<<"A"<<endl;
else
cout<<"B"<<endl;
}
}
}
