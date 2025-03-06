#include<stdio.h>
int main()
{
    int N, i, j = 0, a[100], b[100] ={0}, t = 0;
    scanf("%d", &N);
   // b[N] = 0;
    for (i = N; i > 0; i--)
    {
        scanf("%d", &t);
        for (j = t; j > 0; j--)
        {
            scanf("%d", &a[j]);
            b[i] = b[i] + a[j];
        }
    }
    for (i = N; i > 0; i--)
    {
        printf("%d\n", b[i]);
    }
return 0;
}
