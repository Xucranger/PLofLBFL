#include<stdio.h>
#include<math.h>
int gg(int b,int a ){double c;
	if(b==0) c=sin(a);
	else c=sin(gg(b-1,a));
	return c;
}
int main(){
	int a,c,d,e,f,g;
	double h,i;
	while(scanf("%d",&a)!=EOF){
		h=sin(a);
		for(c=1;c<=a;c++){
			h=sin(h);
		}
		printf("%.6f\n",h);	
		}
	}
