 #include <stdio.h>
 int main()
 {
 	int a,b,c;
 	while (scanf ("%d %d %d\n",&a,&b,&c)!=EOF) 
 	{
	 if (a+b>c&&a+c>b&&b+c>a)
      {
         if (a==b&&a==c)
		     printf ("DB\n");
		 else if  (a==b&&a!=c)
		     printf ("DY\n");
	     else if  (a==c&&a!=b)
	         printf ("DY\n");	
		 else if  (b==c&&b!=a)
	         printf ("DY\n");	
	     else if (c*c==a*a+b*b&&a!=b)
	         printf ("ZJ\n");
	     else if (a*a==c*c+b*b&&c!=b)
	         printf ("ZJ\n");    
	     else if (b*b==a*a+c*c&&c!=b)
	         printf ("ZJ\n");
	     else 
	         printf ("PT\n");
	  }
	  else
	  printf ("ERROR\n");
      }
	  return 0;
 }
