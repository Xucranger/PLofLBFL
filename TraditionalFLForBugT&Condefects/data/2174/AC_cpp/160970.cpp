#include <iostream>
int main()
{
      float a,b,c;
     while(scanf("%f %f",&a,&b)!=EOF)
    {
             if(b==0)
                 printf("error\n");
             else
				{
					c=a/b;
					int Result=(int)(c+0.5);
					printf("%d\n",Result); 
				 } 
     }
    return 0;
}
