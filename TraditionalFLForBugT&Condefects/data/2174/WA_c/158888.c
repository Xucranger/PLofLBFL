#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,i,c,d;
    for(i=0;i<=100;i++){
      scanf("%d%d",&a,&b);
      if(b==0)
        printf("ERROR\n");
      else {
          d=a%b;
          c=a/b;
          if(2*d>=b)
          printf("%d\n",c+1);
          else if(2*d*(-1)>=b)
          printf("%d\n",c-1);
          else printf("%d\n",c);
      }          
    }
}
