#include <stdio.h>
int main(void){
	int a,b;
	int m;
	int  c,i;
	while((scanf("%d %d",&a,&b))!=EOF){
		if(b==0){
			printf("error\n");
		}
		else{
			i=a/b;
			c=a*10/b;
			m=c%10;
			if(m>=5){
				i++;
			} 
					printf("%d\n",i);
		}
	}
	return 0;
}
