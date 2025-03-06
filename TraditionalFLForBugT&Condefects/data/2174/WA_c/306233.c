#include<stdio.h>
int main(){
	int a,b,c;
	while(scanf("%d %d",&a,&b)!=EOF){
		if(b==0){
			printf("error\n");
			return 0;
		}
		else{
			c=a/b;
			if((a%b)*10>=5*b) c++;
			printf("%d\n",c);		
		}
	}
	return 0;
} 
