#include<stdio.h>
int main(){
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF){
		if(b==0)
		  printf("error");
		else{
			if(((a*10/b)%10)>=5)
			printf("%d",a/b+1);
			else printf("%d",a/b);
		}  
	}
}
