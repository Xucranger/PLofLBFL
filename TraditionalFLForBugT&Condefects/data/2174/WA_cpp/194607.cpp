#include<stdio.h>
int main()
{             float a,b;
              while(~scanf("%f %f",&a,&b))
              {
                            if(b==0) printf("error");
                            else
                            {
                                printf("%.0f\n",a/b);
                            }
              }
return 0;
}
