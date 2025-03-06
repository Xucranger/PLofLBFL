#include<iostream>
#include<cmath>
#include<iomanip>
#include<string>
#include<sstream>
using namespace std;
double F(int x , int n){
	int n1 = n;
	if(x != 0){
	return sin(F(x-1, n1));
	}
	else{
		return sin(n1);
	}
}
int main(){	
	string str;
	int num;
	while(getline(cin,str))
	{
		if (str.size()==0) break;
		istringstream ist(str);
		for(int j=0;ist>>num&&j<str.length();j++)
		{
			cout <<setiosflags(ios::fixed)<<setprecision(6)<< F(num,num)<<endl;
		}
	}
}
