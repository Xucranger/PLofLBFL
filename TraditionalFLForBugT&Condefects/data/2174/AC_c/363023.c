#include<stdio.h>
int main()
{float a,b,c;
while(scanf("%f %f",&a,&b)!=EOF)
{if(b==0)
printf("error\n");
else
{c=floor(a*1.0/b);
if(a*1.0/b-c>=0.5)
    c++;
printf("%.0f\n",c);
}
}
return 0;
}
