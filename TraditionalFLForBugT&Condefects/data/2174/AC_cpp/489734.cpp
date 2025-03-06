#include<iostream>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<map>
#include<set>
#include<stack>
#include<queue>
using namespace std;
typedef long long ll;
int main()
{
	double m,n,i;
	int t;
	double k;
	while(cin>>m>>n)
	{
		if(n==0)
		{
			printf("error\n");
			continue;
		}
		t=m/n;
		k=m/n;
		if(k-t>=0.5)
		{
			t++;
		}
		printf("%d\n",t);
	}
}
