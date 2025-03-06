#include<stdio.h>
int main(){
int  a,b;
while(scanf("%d%d",&a,&b)!=EOF){
if(b==0) printf("error\n");
else 
{int  r;
	r=100*a/b;
if(r%100>=50) printf("%d\n",a/b+1);
else printf("%d\n",a/b);
}}
}
