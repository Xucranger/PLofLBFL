#include<stdio.h>
int main(){
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF){
		int c=(int)(a*1.0/b+0.5);
		if(b!=0)
			printf("%d\n",c);
		else 
			printf("error\n");
	}
	return 0;
}
