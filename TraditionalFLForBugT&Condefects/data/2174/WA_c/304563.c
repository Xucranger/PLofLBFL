#include <stdio.h>
int main()
{
    int a,b;
    float c;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b==0) printf("error\n");
        else{
            c=a/b;
            printf("%d\n",(int)(c+0.5));
        } 
    }
}
