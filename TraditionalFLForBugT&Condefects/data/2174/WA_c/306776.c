#include <stdio.h>
#include <math.h>
int main(){
	int a,b;
	while((scanf("%d%d",&a,&b))!=-1);
	if(!b)
		printf("error");
	else
		printf("%d",a/b);
	return 0;
}
