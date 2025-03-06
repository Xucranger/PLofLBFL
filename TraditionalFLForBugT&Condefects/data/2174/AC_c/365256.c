#include<stdio.h>
/*完成除法运算，输入为多行数据，每行包括两个整数a和b，用空格隔开。
对每行数据，输出a÷b的结果，结果四舍五入，如果b等于0，输出error*/
int main()
{
	int a,b;
	float c;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
		printf("error\n");
		else
		{
			c=(1.0*a)/b;
			if(2*c>=a/b*2+1)
			printf("%d\n",a/b+1);
			else
			printf("%d\n",a/b);
		}
	}
	return 0;
}
