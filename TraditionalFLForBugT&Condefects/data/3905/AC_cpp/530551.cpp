#include<cstdio>
int main() {
	int n;
	scanf("%d",&n);
	for (int i=1;i<=n;++i) {
		int m,t,sum=0;
		scanf("%d",&m);
		for (int i=1;i<=m;++i) {
			scanf("%d",&t);
			sum+=t;
		}
		printf("%d\n",sum);
	}
	return 0;
} 
