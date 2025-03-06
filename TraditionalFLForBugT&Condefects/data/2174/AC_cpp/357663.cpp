#include<cstdio>
using namespace std;
int main(){
	float a,b;
	while(scanf("%f%f",&a,&b)!=EOF){
		if(b==0)	puts("error");
		else{
			float c;
			c=a/b-(int)(a/b);
			//printf("%f\n",c);
			if(c>=0.5)	c=0.5+a/b;
			else	c=a/b;
			printf("%.0f\n",c);
		}
	}	
} 
