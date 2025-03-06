#include<stdio.h>
int main()
{
    float a,b;
    int c;
    float d;
    while(scanf("%f %f",&a,&b)!=EOF){
    if(b==0){
        printf("error\n");
            }else {c=a/b;
                   d=a/b;
                if(2*d-2*c>=1){
                printf("%d\n",c+1);
                }else printf("%d\n",c);
            }
    }
    return 0;
}
