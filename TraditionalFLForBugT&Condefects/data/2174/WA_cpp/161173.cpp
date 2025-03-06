#include<iostream>
using namespace std;
int main()
{   
	 int a,b;
	 float res;
	 while(cin>>a>>b)
	 {    if(b==0)
	        cout<<"error"<<endl;
	      else	{   /*j=a%b;
		            if(j<(a/2.0))
			          cout<<a/b<<endl;
		            else 
						cout<<(a/b+1)<<endl;*/
			  res=a*1.0/b;
			  printf("%.0f\n",res);
		  }
     }
	 return 0;
}
