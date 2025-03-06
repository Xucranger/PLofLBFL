#include<iostream>
#include<string>
using namespace std;
string f(string& v1, string& v2) {
	int i1 = 0, i2 = 0; int s1 = v1.size(), s2 = v2.size();
	if (s1 != s2)
		return "No";
	while (v1[i1] != v2[i2]) {
		++i2;
		if (i2 == s2)
			return "No";
	}
	if (i2 == s2 - 1)
		i2 = -1;
		if(i1==s1-1)
		i1=-1;
	while (1) {
		if (v1[++i1] != v2[++i2]) {
			return "No";
		}
		else {
			if (i2 == s2 - 1)
				i2 = -1;
				if (i1 == s1 - 1)
					return "Yes";
		}
	}
}
int main() {
	string v1, v2;
	while(cin>>v1>>v2){
		cout << f(v1, v2) << endl;}
	return 0;
}
