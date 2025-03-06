#include<iostream>
using namespace std;
int main()
{   
	 float a,b;
	 while(cin>>a>>b)
	 {    if(b==0)
	        cout<<"error"<<endl;
	      else	{   /*j=a%b;
		            if(j<(a/2.0))
			          cout<<a/b<<endl;
		            else 
						cout<<(a/b+1)<<endl;*/
			  printf("%.0f",a/b);
		  }
     }
	 return 0;
}
