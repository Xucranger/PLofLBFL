#include<stdio.h>
#include<string.h>
int main(){
	float a,b;
	while(scanf("%f%f",&a,&b)!=EOF){
		if(b==0){
			printf("error\n");
		}
		else{
		    float c;
		    c=a/b;
	    	int d=c;
		    if(c-d>=0.5)
		        printf("%d\n",d+1);
		    else
		        printf("%d\n",d);
	    }
	}
	return 0;
} 
