#include <stdio.h>
  void main()
  {
	 float a,b;
	 int c,d;
	 while (scanf("%f %f",&a,&b)!=EOF)
		 if (b!=0)
		 {
			 c=a/b;
			 d=a/b+0.5;
			 if (c==d) printf("%d\n",c);
			   else printf("%d\n",d);
         }
		 else printf("error\n");
  }
