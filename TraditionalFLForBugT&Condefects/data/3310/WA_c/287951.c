#include<stdio.h>
#include<math.h>
int main(){
	int n,flag=0;
	while(scanf("%d",&n)!=EOF){
		flag++;
		float b,c;
		b=sin(n);
		c=sin(b);
		for(int i=1;i<n;i++){
			c=sin(c);	
		}
		printf("%f\n",c);
		if(flag>20) break;
	}
	return 0;
}
