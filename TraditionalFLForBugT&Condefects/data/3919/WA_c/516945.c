#include<stdio.h>
int main()
{
	int a, b, c, d, e, f, i;
	scanf("%d %d %d", &a, &b, &c);
	for (i = 1; i <= 1; i++)
	{
		scanf("%d%d%d", &d, &e, &f);
	}
	if (a == b == c)
		printf("DB\n");
	else if ((a == b || a == c || c == b) && (a + b > c&& a + c > b&& b + c > a))
		printf("DY\n");
	else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
		printf("ZJ\n");
	else if ((a != b != c) && (a + b > c&& a + c > b&& b + c > a))
		printf("PT\n");
	else
		printf("ERROR\n");
	if (d == e == f)
		printf("DB");
	else if ((d == e || d == f || f== e) && (e +d > f&& e + f > d&& f + d > e))
		printf("DY");
	else if (d * d + e * e == f * f || d * d + f * f == e * e || f * f + e * e == d * d)
		printf("ZJ");
	else if ((d != e != f) && (e + d > f&& e + f > d&& f + d > e))
		printf("PT");
	else
		printf("ERROR");
}
