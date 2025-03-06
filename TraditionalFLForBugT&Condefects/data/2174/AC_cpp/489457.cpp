#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
	int a,b,ans;
	while(cin>>a>>b){
		if(b==0){
			cout<<"error"<<endl;
		}
		else{
			ans=a/b;
			int temp;
			temp=a%b;
			if(temp*2>=b){
				ans++;
			}
			cout<<ans<<endl;
		}
	}
	return 0;
}
