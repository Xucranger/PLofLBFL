#include<stdio.h>
int main()
{
    int a,b,i=0;
    char str[1000];
    while(scanf("%d %d",&a,&b)!=EOF)
    {
      if(b==0)
        str[i]='error';
      else str[i]=a/b;
    }
    for(i=0;str[i]!='\0';i++)
        printf("%c\n",str[i]);
}
