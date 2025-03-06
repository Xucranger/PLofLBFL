#include<iostream>
#include<algorithm>
#include<cstdio>
#include<ctype.h>
#include<math.h>
#include<cstring>
#include<stack>
#define deb(x) cout<<"#---"<<#x<<"="<<x<<endl
#define debb(x,y) cout<<"#---"<<#x<<","<<#y<<"=("<<x<<","<<y<<")"<<endl
using namespace std;
int main() 
{
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0) cout<<"error"<<endl;
		else{
			double c=a/(b+0.0);
			int x=c;
			if((c-x)>=0.5) cout<<x+1<<endl;
			else cout<<x<<endl;
		}
	}
}
