#include <stdio.h>
int main()
{
	double a,b;
	while(scanf("%lf%lf",&a,&b)!=EOF){
		if(b==0){
			printf("error\n");
			continue;
		}
		double ret=a/b;
		ret+=0.5;
		printf("%d\n",(int)ret);
	}
	return 0;
}
