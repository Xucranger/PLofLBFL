#include <stdio.h>
#include <math.h>
int main()
{
int a,b,C;
float A,B,c;
while (scanf("%d%d",&a,&b) != EOF)
{
    A=(float)a;
    B=(float)b;
    if(b==0)printf("error\n");
    else{
        c=A/B;
        if(c<(int)c+0.5)
            C=(int)c;
        else
            C=(int)c+1;
        printf("%d\n",C);
    }
}
    return 0;
}
