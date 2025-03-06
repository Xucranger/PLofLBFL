#include <stdio.h>
int main ()
{
	float a, b;
	int t;
	while (~scanf ("%f%f", &a, &b))
	{
		if (b == 0)
		    printf ("error\n");
		else 
		{
			t = (int) (1.0 *a / b + 0.5);
		    printf ("%d\n", t);
        }
	}
	return 0;
}
