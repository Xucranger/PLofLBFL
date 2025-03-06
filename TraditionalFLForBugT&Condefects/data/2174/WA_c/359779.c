#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF)
    {
        if (b == 0)
            printf("error\n");
        else 
        {
            int left = a / b;
            float right = (float)a / (float)b - left;
            if (right > 0.5)
                printf("%d\n", left +1 );
            else printf("%d\n", left);
        }    
    }     
    return 0;   
}    
