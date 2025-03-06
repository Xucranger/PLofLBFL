#include <stdio.h>
int main()
{
    float t;
    int a,b;
    while(scanf("%i %i",&a,&b)!=EOF)
    {   
        if(b==0)
        {
            printf("error");        
        }    
        else 
        {
           t=(float)a/b;
           b=a/b;
           if(t-b>=0.5)
           {
               printf("%i\n",++b);
           }
           else
           {  
               printf("%i\n",b);
           }   
        }
    }                          
    return 0;
}
