# include<iostream>
# include<algorithm>
# include<cstring>
# include<string>
# include<cmath>
# include<queue>
# include<stack>
# include<set>
# include<vector>
# include<cstdio>
using namespace std;
int n;
double F(int x){
	if(x==0)
	return sin(n);
	else
	return sin(F(x-1));
}
int main(void){
	int i,f1,f2,f3;
	while(scanf("%d",&n)!=EOF){
		printf("%lf\n",F(n));
	}
	return 0;
}
