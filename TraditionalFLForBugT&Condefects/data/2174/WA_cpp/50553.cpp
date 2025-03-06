#include<iostream>
using namespace std;
int main(){
	float a,b;
	int c;
	while(cin>>a>>b){
		if(b!=0){
			c=a/b;
			if(c>=1/2)
				printf("%d\n",c+1);
			else
				printf("%d\n",c);
		}
		else
			cout<<"error"<<endl;
	}
	return 0;
}
