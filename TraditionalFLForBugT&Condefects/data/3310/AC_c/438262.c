#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	double j,t;
	while(scanf("%d",&n)!= EOF){
		j = sin(n);
		for(i = 0;i < n;i++){
			t = sin(j);
			j = t; 
		}
		printf("%.6lf\n",t);
}
}
