#include <stdio.h>
int main()
{
    int a, b;
    float answer;
    while (scanf("%d%d", &a, &b) != EOF)
    {
        if (b == 0)
        {
            printf("error\n");
        }
        else
        {
            answer = (1.0*a/b)+0.5;
            printf("%d\n", (int)answer);
        }
    }
    return 0;
}
