#include<stdio.h>
int main(){
	int  a,b;
	while(scanf("%d %d",&a,&b)!=EOF){
		if(b==0){
			printf("error\n");
		}
		else{
			float c; 
			int s;
			s=a/b;
			//float d,e;
			//d=float(a);
			//e=float(b);
			c=(float)a/b;
			//printf("%f",c);
			float t;
			t=(float)c-s;
			if(t>=0.5){
				s++;
			}
			printf("%d\n",s);
		}
	}
} 
