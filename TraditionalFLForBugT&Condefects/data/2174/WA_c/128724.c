#include<stdio.h>
int main(){
int a,b,result;
while(~scanf("%d %d",&a,&b)){
	if(b==0)
		printf("ERROR!\n");
	else{
		result=a*1.0/b+0.5;
		printf("%d\n",result);
	}	
}
return 0;
}
