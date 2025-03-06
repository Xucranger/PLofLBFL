#include<math.h>
#include <iostream>
using namespace std;
int main()
{
    int a,b,s,y;
    while(cin>>a>>b)   
    {                                      
            if(b==0) 
            cout<<"error"<<endl;
            else
            {
            	s=a/b;
            if ((a-b*s)>0.5*b||(a-b*s)==0.5*b)
			s=s+1; 
			cout<<s<<endl;
			}
    }
}
