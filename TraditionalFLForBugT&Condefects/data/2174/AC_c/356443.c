#include<stdio.h>
int main()
{int a,b;
	while(scanf("%d %d",&a,&b) != EOF)
	{
		int c,d;
		if(b==0)
		printf("error\n");
		else {c=a/b;
		d=a%b;
		if(c==0&&d*2<b)
		printf("0\n");
		else if(c==0&&d*2>=b)
		printf("1\n");
		else if(c!=0&&d*2<b)
		printf("%d\n",c);
		else if(c!=0&&d*2>=b)
		printf("%d\n",c+1);
}
}
	}
