#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,i;
    for(i=0;i<=100;i++){
      scanf("%d%d",&a,&b);
      if(b==0)
        printf("ERROR\n");
      else {
           c=a/b;
      printf("%d\n",c);
      }          
    }
}
