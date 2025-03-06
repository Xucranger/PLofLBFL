#include <stdio.h>
int main()
{
    int a,b,c,e;
    while(scanf("%d %d",&a,&b)!=EOF){
    if(b==0)printf("error\n");
    else
     {
        c=a/b;
        e=a%b;
       if(2*e>=b)
        printf("%d\n",c+1);
        else
          printf("%d\n",c);
     }
    }
}
