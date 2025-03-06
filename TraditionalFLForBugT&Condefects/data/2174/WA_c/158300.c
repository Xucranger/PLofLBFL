#include<stdio.h>
int main() {
	//int a, b;//定义成整型不行。怎么强制都失败
	int a, b;
	while(scanf("%d %d", &a, &b) != EOF ) {
		if(b == 0)
			printf("error");
		else {
			//c = float(a/b);
			if(a*b>0)
			printf("%d", (int)(a/(float)b +0.5));//强制类型转换要将数据类型括起来
			//printf("%d", int(c+0.5));
			//printf("%d", int(c + 0.5));
			else
			printf("%d", (int)(a*1.0/b ));
		}
	}
	return 0;
}
