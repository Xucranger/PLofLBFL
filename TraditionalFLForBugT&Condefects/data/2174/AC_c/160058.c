#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int a,b,i,c,d;
    while(scanf("%d%d",&a,&b)!=EOF){
      if(b==0)
        printf("error\n");
      else {
          d=a%b;
          c=a/b;
          if(b>0&&a>0&&d*2>=b)
          printf("%d\n",c+1);
          else if(b<0&&a<0&&d*2<=-b)
          printf("%d\n",c+1);
          else if(b<0&&a>0&&d*2>=-b)
          printf("%d\n",c-1);
          else if(b>0&&a<0&&d*2<=-b)
          printf("%d\n",c-1);
          else printf("%d\n",c);
      }          
    }
}
