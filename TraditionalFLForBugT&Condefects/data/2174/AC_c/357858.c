#include<stdio.h>
int main(){
	int a,b,m,n;
	while(scanf("%d %d",&a,&b)!=EOF){
		if(b==0)
		printf("error\n");
		else {
		  m=a%b;
		  n=a/b;
		  if(m>=(b+1)/2){
			n=n+1;
			printf("%d\n",n);
		  }
		  else
		  printf("%d\n",n);
		}
	}
}
