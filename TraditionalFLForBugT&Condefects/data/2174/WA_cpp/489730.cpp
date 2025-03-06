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
	int m,n,i,t;
	while(cin>>m>>n)
	{
		if(n==0)
		{
			printf("error\n");
			continue;
		}
		printf("%d\n",m/n);
	}
}
