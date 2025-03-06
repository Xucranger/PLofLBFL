#include<stdio.h>
int main(){
	int a,b,d,r;
	double c;
	while(scanf("%d%d",&a,&b)!=EOF){
		if(b==0){
		printf("error\n");	
		}else{
		c=a*1.0/b;
		if(c-(a/b)>=0.5) r=c+1;
		if(c-(a/b)<0.5) r=c;
		printf("%d\n",r);
			}
	}
} 
