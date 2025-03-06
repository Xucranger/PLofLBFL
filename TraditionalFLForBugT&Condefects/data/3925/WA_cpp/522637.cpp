#include<stdio.h>
#include<string.h>
int main(){
    long long int a,b;
    int c;
    while(scanf("%lld%lld",&a,&b)!=EOF){
    	a=a%10;
    	b=b%10;
    	c=a*b%10;
		printf("%d\n",c);
	}
}
