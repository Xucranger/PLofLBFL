#include<stdio.h>
int main(){
	float a,b,c,e;
	int d;
	while(scanf("%f %f",&a,&b)!=EOF){
		if(b==0)
			printf("error\n");
		else{
			d=a/b;
			c=a/b;
			e=c-d;
			if(e>=0.5)
				d=d+1;
			printf("%d\n",d);
		}
	}
	return 0;
}
