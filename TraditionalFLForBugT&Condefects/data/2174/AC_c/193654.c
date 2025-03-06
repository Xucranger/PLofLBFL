#include <stdio.h>
int main ()
{
    int a,b;
    while (scanf("%d%d",&a,&b) != EOF)
	{    float n;
	if (b!=0)
      {
          n=a*1.0/(1.0*b);
    int s;
    s=a/b;
    if(n-s>=0.5)
        s+=1;
    printf("%d\n",s);}
    else
         printf("error\n");
	}
    return 0;
}
