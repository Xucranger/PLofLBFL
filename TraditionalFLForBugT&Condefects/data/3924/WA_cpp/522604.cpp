#include<stdio.h>
#include<string.h>
int main()
{
  int a,b;
  while (scanf("%d%d",&a,&b)!=EOF){
        if(a==11&&b<=9){
        	printf("Game Over\n");
		}else if(a>11&&a-b==2){
			printf("Game Over\n");
		}else if(b==11&&a<=9)printf("Game Over\n");
		 else if(b>11&&b-a==2)printf("Game Over\n");
		 else if((b+a)==0){
		 	printf("A\n"); 
		 }else if ((b+a)%2==0){
		 	if ((b+a)/2%2==0) { 
			  printf("A\n");
		 }else printf("B\n");
  }else {
  	if ((b+a+1)/2==0){
  		printf("A\n");
	  }else printf("B\n");
  }
}
}
