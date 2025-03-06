#include<stdio.h>
int main(){
int a,b,m,n;
while(scanf("%d %d",&a,&b)!=EOF)
if(b==0){printf("error\n");}
else{n=a/b;m=((a*1.)/b)-n+0.5;
     n=n+m;
     printf("%d",n);
 }
 return 0;
}
