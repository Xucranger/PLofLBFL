#include <iostream>
#include<stdio.h>
/* 输入为多行数据，每行包括两个整数a和b，用空格隔开,输出a÷b的结果，结果四舍五入，如果b等于0，输出error*/
int main() {
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF){
		int c;
		if(b==0)
		  printf("error\n");
		else
		{c=float(a)/float(c)+0.5;
		printf("%d\n",c);
		}
	}
	return 0;
}
