#include <stdio.h>
int main (){
	int a,b,c,d;
	while(scanf("%d %d",&a,&b) != EOF){
		if(!b){
			printf("error\n");
		}
		else{
			c = a/b;
			d = a%b;
			if(d > b/2){
				c += 1;
			}
			printf("%d\n",c);
		}
	}
	return 0;
}
