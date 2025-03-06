#include <stdio.h>
int main(){
	float a,b;
	while(scanf("%f %f",&a,&b)!=EOF){
		if(b==0)
			printf("error\n");
		else{
            int y = (int)(a/b+0.5)>(int)a/b?(int)a/b+1:(int)a/b;
            printf("%d\n",y);
		}
	}
}
