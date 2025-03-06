#include<stdio.h>
#include<math.h>
int main(){
    float a,i;
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        a=sin(n);
        for(i=0;i<n;i++)
            a=sin(a);
        printf("%.6f\n",a);
    }
 }
