#include<stdio.h>
int main(){
	int a,b;
	int c,d,div;
	while(scanf("%d %d",&a,&b)!=EOF){
		if(b==0) printf("error\n");
		else {
			c=a/b;
			d=a%b;
			if(2*d>=b) div=c+1;
			else div=c;
			printf("%d\n",div);
		}
	}
	return 0;
} 
