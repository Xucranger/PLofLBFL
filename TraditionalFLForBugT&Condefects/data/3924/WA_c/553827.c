#include<stdio.h>
int main(){
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF){
		if(a==11&&b<=9||b==11&&a<=9)printf("Game Over\n");
		else if(a==10&&b==10)printf("A\n");
		else if(a>10&&b>10&&(a-b==2||b-a==2))printf("Game Over\n");
		else if(a>10&&b>10&&(a+b)%2==0)printf("A\n");
		else if(a>10&&b>10&&(a+b)%2==1)printf("B\n");
		else {
			if(a+b==0)printf("A\n");
			else if((a+b+1)%4==0)printf("B\n");
			else if((a+b)%4==0)printf("A\n");
			else if((a+b+3)%4==0)printf("A\n");
			else if((a+b+2)%4==0)printf("B\n");
		}
	}
	return 0;
}
