#include"stdio.h"
#include"stdlib.h"
int main()
 {
     int x,y;
     while(scanf("%d %d",&x,&y)!=EOF)
     {
         if(y==0)
             printf("error\n");
         else
          printf("%d\n",(x*10/y+5)/10);
}
 }
