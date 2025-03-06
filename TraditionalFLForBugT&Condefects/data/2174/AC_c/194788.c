#include<stdio.h>
int main(void)
{int a,b,s[100],i=0;
float k;
while(scanf("%d%d",&a,&b)!=EOF)
{if(b!=0)
{
s[i++]=(float)a/(float)b+0.5;
}
else s[i++]=-100;
}
for(int j=0;j<i;j++)
{if(s[j]!=-100)
printf("%d\n",s[j]);
else
printf("error\n");
}
return 0;
}
