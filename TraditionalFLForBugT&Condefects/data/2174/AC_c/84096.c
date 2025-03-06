#include<stdio.h>
void main(){
    int a,b,d;
    float c;
    while(scanf("%d %d",&a,&b)!=EOF){
        if(b==0)
          printf("error\n");
        else
          {  c = (a*0.1)/(b*0.1);
              d=c+0.5;
              printf("%d\n",d);
          }
    }
}
