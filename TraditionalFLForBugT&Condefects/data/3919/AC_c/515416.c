#include<stdio.h>
#include<string.h>
int main(){
	int a,b,c;
	while(scanf("%d%d%d",&a,&b,&c)!=EOF){
		if(a+b<=c||a+c<=b||b+c<=a) printf("ERROR\n");
		else{
			if(a==b&&b==c) printf("DB\n");
			else{
				if(a==b||b==c||c==a) printf("DY\n");
				else{
					if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a) printf("ZJ\n");
					else printf("PT\n");
				}
			}
		}
	}	
	return 0;
}
