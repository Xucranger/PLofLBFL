#include<stdio.h>
int main()
{
    int a,b;
    float c;
    while(scanf("%d %d",&a,&b)!=EOF)
      {if(b==0)
          {printf("ERROR\n");
          continue;}
        else
          c=a*1.0/b*1.0-a/b;
       if(c>=0.5)
           printf("%d\n",a/b+1);
        else
           printf("%d\n",a/b);
      }
    return 0;
}
