#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
	int a,b,c;
	float d;
	while((scanf("%d%d",&a,&b))!=EOF){
		d=round(a/(float) b);
		c=d;
		if(!b)
			printf("error\n");
		// if()
		else{
			printf("%d\n",c);
			}
	}
	return 0;
}
