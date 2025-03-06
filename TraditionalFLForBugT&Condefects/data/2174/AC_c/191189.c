#include<stdio.h>
int main()
{
    int a,b,y;
    float f;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
            if(b!=0){
    f=(float)a/b;
    f=(f+0.5);
    y=(int) f;
    printf("%d\n",y);}
    else{printf("error\n");}
   }
 return 0;
}
