#include<stdio.h>
int main()
{
	int a,b,shang,yu;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
			printf("error\n");
		else
		{
			shang=a/b;
			yu=a%b;
			if(yu*2>=b)
				shang+=1;
			printf("%d\n",shang);
		}
	}
	return 0;
}
