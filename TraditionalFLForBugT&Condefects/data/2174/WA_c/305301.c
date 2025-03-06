#include<stdio.h>
int main(){
	int a,b,c1,c,c2;
	while(scanf("%d%d",&a,&b)!=EOF){
		if(b!=0){
		c1=a/b;
		c2=2*(a%b);
		if(c2<b) c=c1;
		else c=c1+1;
		printf("%d\n",c);
		}
		else printf("error");
		}
}
