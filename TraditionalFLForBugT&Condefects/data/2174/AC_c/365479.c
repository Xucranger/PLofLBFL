#include<stdio.h>
#define N 2
 int main()
{
       int i,a,b,s,s1;
             while(scanf("%d%d",&a,&b)!=EOF)
        {
             if(b==0)
             printf("error\n");
             else
             {
             s=a/b;
             s1=2*(a%b);
             if(s1<b)
             printf("%d\n",s);
             else
             printf("%d\n",s+1); 
             }
        }
       return 0;
}
