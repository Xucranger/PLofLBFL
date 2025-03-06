#include<stdio.h>
int main(){
	int a,b,c;
	float d;
	while(scanf("%d %d",&a,&b)!=EOF){
		if(b==0)
		printf("error\n");
		else{
			d=float(a*1.0/b);
			c=int(d+0.5);
			printf("%d\n",c);
		}
	}
	return 0;
} 
