#include<iostream> 
#include <stdio.h>
using namespace std; 
int main()
{
    int a,b,c;
    while(scanf("%d %d",&a,&b)!=EOF)
    {   if(b==0) cout<<"error"<<endl;
        else 
             {c=(int)(a/b+0.5);
              cout<<c<<endl;              
              } 
    }
}
