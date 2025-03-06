#include<stdio.h>
int main()
{ float a,b,c;
  while(~scanf("%f%f",&a,&b))
  {
    if(b==0)
      printf("error\n");
    else
    {c=(a+0.5)/b;
     printf("%.0f\n",c);
    }
  }
  return 0;
}
