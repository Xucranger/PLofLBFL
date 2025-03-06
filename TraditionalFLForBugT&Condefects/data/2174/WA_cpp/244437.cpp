#include<iostream>
using namespace std;
int main()
{
	int a,b,n,c[1000],i=0,t,d[1000];
	float m;
	while(cin>>a>>b){
		if(b==0) d[i]=0;
		else if(b!=0){
			m=1.0*a/b;
			n=int(m);
			if((m-n)>=0.5) {c[i]=n+1;
			d[i]=1;}
			else{d[i]=2;
			c[i]=n;}}
		i++;}
    t=i;
	for(i=0;i<=t;i++){
		switch(d[i]){case 2:cout<<c[i]<<"\n";break;
			case 0:cout<<"error"<<"\n";break;
			case 1:cout<<c[i]<<"\n";break;
			}}
}
