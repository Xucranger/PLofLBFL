#include<stdio.h>
int main(){
int a,b,m,n;
while(scanf("%d %d",&a,&b)!=EOF)
if(b==0){printf("error\n");}
else{m=a%b*10/b;n=a/b;
     if(m<5){printf("%d",n);}
     if(m>=5){n=n+1;printf("%d",n);}
 }
 return 0;
}
