#include <stdio.h>
int main(){
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF){
		if(b==0)
		printf("error");
		else{
			int c=a%b;
			if(c*2>=b)
			printf("%d",a/b+1);
			else
			printf("%d",a/b);
		}
	printf("\n");
	}
	return 0;
}
