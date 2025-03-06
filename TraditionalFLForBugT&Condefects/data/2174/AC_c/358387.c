#include <stdio.h>
#include <math.h>
int main()
{int a,b;
 while(scanf("%d %d",&a,&b)!=EOF){
 if(b==0){
 printf("error\n");
 continue;
 }
 float s=(float)a/b;
 printf("%.0f\n",round(s));	
 }
}
