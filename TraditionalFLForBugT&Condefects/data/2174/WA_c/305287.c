#include<stdio.h>
int main(){
	int a,b,c1,c,c2,bj;
	while(scanf("%d%d",&a,&b)!=EOF){
		if(b==0) printf("error");
		else{
				c1=a/b;
				c2=a%b;
				bj=2*c2;
				if(bj<b) c=c1;
				else c=c1+1;
				printf("%d\n",c);
			}
		}
}
