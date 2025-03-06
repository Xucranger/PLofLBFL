#include <stdio.h> 
int main () 
{int a,b;
float n;
 while(scanf("%d %d",&a,&b)!=EOF)
  {if (b==0)  printf("error\n");
  else { n=a%b;
   if(b%2==0)
    { if(n>=b/2)  printf("%d\n",a/b+1);
      else  printf("%d\n",a/b); }
    else
    {if(n>=b/2+0.5)  printf("%d\n",a/b+1);
      else  printf("%d\n",a/b); }}
}   
 return 0; 
} 
