#include <stdio.h>
#include <malloc.h>
int main()
{
	float a,b;
	int i=0,j;
	int *c;
	while(scanf("%f%f",&a,&b)!=EOF){
//		c = (int *)malloc(sizeof(int));
//		if(b != 0) c[i++] = (int)(a/b+0.5);	
//		else c[i++] = -112;
if(b == 0) printf("error\n");
else printf("%d\n",(int)(a/b+0.5));
	}
//	for(j = 0;j < i-1;j++){
//		if(c[j] != -112) printf("%d\n",c[j]);
//		else printf("error\n");
//	}
	return 0;
}
