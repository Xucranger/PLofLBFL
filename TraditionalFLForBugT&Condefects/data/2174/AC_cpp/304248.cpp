#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int a,b;
	while(~scanf("%d%d",&a,&b))
	{
		if(b == 0) printf("error\n");
		else{
			double c = (1.0 * a / b) + 0.5; 
			printf("%d\n", (int)c);
		}
	}
	return 0;
}
