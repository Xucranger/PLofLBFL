#include<stdio.h>
#include<math.h>
double work(double in,double data){
	if (in == 0) return sin(data);
	else {
		return sin(work(in - 1, data));
	}
}
int main() {
	int i = 0;
	while (scanf("%d", &i) != -1) {
		double ret = work(i, i);
		printf("%.6f\n", ret);
	}
	return 0;
}
