#include <stdio.h>
#include <math.h>
int main(void)
{
  int a, b;
  float c;
  while(scanf("%d %d", &a, &b) != EOF)
  {
    if(b == 0)
    {
      printf("error\n");
    }
    else
    {
      c = (float)a / b;
      printf("%.0f\n", round(c));
    }
  }
  return 0;
}
