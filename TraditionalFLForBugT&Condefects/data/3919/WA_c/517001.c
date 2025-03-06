#include<stdio.h>
int main()
{
	int a, b, c;
	while ((scanf("%d %d %d", &a, &b, &c)) != EOF)
	if (a == b == c)
		printf("DB\n");
	else if ((a == b || a == c || c == b) && (a + b > c&& a + c > b&& b + c > a))
		printf("DY\n");
	if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
		printf("ZJ\n");
	else if ((a != b &&b != c&&a!=c) && (a + b > c&& a + c > b&& b + c > a))
		printf("PT\n");
	if(a+b<=c||a+c<=b||b+c<=a)
		printf("ERROR\n");
}
