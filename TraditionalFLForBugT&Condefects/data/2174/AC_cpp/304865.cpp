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
# include<cstdlib>
# include<map>
# include<deque>
# include<limits.h>
# define deb(x) printf("# x=%d\n",x)
# define deb_d(x) printf("# x=%lf\n",x)
# define ccout(x) printf("%d\n",x)
typedef long long ll;
using namespace std;
int a,b;
int main(void){
	int ans;
	while(scanf("%d %d",&a,&b)!=EOF){
		if(b==0){
			puts("error");
			continue;
		}
		ans=(a*1.0/b)+0.5;
		printf("%d\n",ans);
	}
	return 0;
}
