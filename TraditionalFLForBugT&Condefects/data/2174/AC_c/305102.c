#include<stdio.h>
int main(){
	int a,b;
	float c;
	int d;
	while(scanf("%d%d",&a,&b)!=EOF){
		if(b==0)
			printf("error\n");
		else{
			c=(float)a/b;
			d=a/b;
			if(c-d>=0.5)
				d=d+1;
			printf("%d\n",d);
			}
	}
	return 0;
}
