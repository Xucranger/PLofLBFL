#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int a,b;
while(cin >> a >> b)
{   double n;
    if(b==0)
    cout<<"error"<<endl;
    else{ 
    if((a*10/b)%10<5)
			{
				cout<<a/b<<endl;
			}
			else
			{
				cout<<a/b+1<<endl;
			} 
        }
 }
}
