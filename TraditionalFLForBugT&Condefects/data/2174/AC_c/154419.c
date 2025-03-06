#include<stdio.h>
 main()
{ int a,b,d;
  float c;
  while (scanf("%d %d",&a,&b)!=EOF)
  {  if(b!=0)
    {
     c=a*1./b;
     d=(int)((c+0.5));
    printf("%d\n",d);
    }
   else
    printf("error\n");
  }
}
