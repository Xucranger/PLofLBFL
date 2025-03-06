#include<iostream> 
using namespace std; 
int main() 
{ 
     int i,j; 
     while(cin>>i>>j) 
     { 
          if(j==0) 
          { 
               cout<<"error"<<endl; 
               continue; 
          }
          if(i*10/j%10>4) 
             cout<<i/j+1<<endl;
          else
             cout<<i/j<<endl;     
     } 
     return 0; 
} 
