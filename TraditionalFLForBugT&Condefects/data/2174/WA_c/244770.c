#include<stdio.h>
void main()
{ int a,b,c;
  scanf("%d,%d",&a,&b);
  if(b==0)
    printf("error\n");
  else if(a%b<5)
    { c=a/b;
       printf("%d",c);
    }
  else
    { c=a/b+1;
      printf("%d",c);
    }
  return 0;
}
