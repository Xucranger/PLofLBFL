#include<iostream>
#include<cstdio>
#include<algorithm>
#include<stack>
using namespace std;
stack<long long> s;
int main()
{
	s.push(10000);
	s.pop();
	int a, b;
	while (scanf("%d %d",&a,&b)!=EOF) {
		if (b==0) {
			printf("error\n");
		}
		else {
			printf("%.0f\n", a / b/1.0);
		}
	}
	return 0;
}
