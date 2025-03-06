#include <stdio.h>
int main()
{
	char a[100];
	int nub = 0;
	gets(a);
	char temp;
	int i = 0;
	while(a[nub] != '\0')
	{
		nub++;
	}
	printf("%d\n", nub);
 	while(nub != i)
	{
		temp = a[nub - 1];
		a[nub - 1] = a[i];
		a[i] = temp;
		i++;
		nub--;
		if(i + 1 == nub)
			break;
	}
	printf("%s\n", a);
	return 0;
}
