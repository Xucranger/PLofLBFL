#include <stdio.h>
int main()
{
    int a, r, c, i, j, sum;
    scanf("%d", &r);
    for (i=1;i<=r;i++)
    {
    	scanf("%d", &c);
    	for (j=1, sum=0;j<=c;j++)
    	{
    		scanf("%d", &a);
    		sum+=a;
		}
		printf("%d\n", sum);
	}
    return 0;
}
