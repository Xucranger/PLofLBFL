#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(){
	int a,b;
	double c;
	while(scanf("%d %d",&a,&b)!=EOF){
	if(b==0) 
	 printf("error\n");
	else{
		c=a*1.0/b-a/b;
		if(c<0.5) printf("%d\n",a/b);
		else printf("%d\n",a/b+1);
	}
	}
  return 0;
  }
