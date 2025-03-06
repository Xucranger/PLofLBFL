#include<stdio.h>
int main(){
int a,b,n;
while(scanf("%d %d",&a,&b)!=EOF)
if(b==0){printf("error");}
if(b!=0){n=a*1./b+0.5;
         printf("%d",n);
 }
 return 0;
}
