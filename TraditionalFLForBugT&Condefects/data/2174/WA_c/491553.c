#include<stdio.h>
int main()
{
	int a,b,sha,yu;
	float m;
	while(scanf("%d %d",&a,&b)!=EOF){
		if(b==0) printf("error");
		else {
			sha=a/b;
			yu=a%b;
			if(yu<=b/2) printf("%d\n",sha);
			if(yu>b/2) printf("%d\n",sha+1);
		}
	}
} 
