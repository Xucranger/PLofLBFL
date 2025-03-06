#include<iostream>
using namespace std;
int main()
{   
	 int a,b;
	 while(cin>>a>>b)
	 {    if(b==0)
	        cout<<"error"<<endl;
	      else	{
			  printf("%.0f\n",a*1.0/b);
		  }
     }
	 return 0;
}
