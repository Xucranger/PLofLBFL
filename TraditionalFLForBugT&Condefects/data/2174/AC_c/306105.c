#include<stdio.h>
int main(){
	double a,b;
	while(scanf("%lf%lf",&a,&b)!=EOF){
		int c;
		if(b==0)  printf("error\n");
		else{
			c=a/b+0.5;  
		    printf("%d\n",c);
		}
	}
	return 0;
} 
