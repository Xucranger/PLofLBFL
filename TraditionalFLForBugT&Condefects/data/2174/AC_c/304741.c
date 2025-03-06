#include<stdio.h>
int main(){
	int a,b,d;
	double c;
	while(scanf("%d %d",&a,&b)!=EOF){
		if(b==0)
			printf("error\n");
		else{
			c=(double)a/(double)b;
			d=c+0.5;
			printf("%d\n",d);
		}
	} 
}
