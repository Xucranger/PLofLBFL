#include <stdio.h>
int main () {
	int a , b ;
	while (scanf ("%d %d",&a, &b) != EOF) {	
		if (b) {
			printf ("%d\n",a/b+a%b*2/b) ;
		}
		else {
			printf ("error") ;
		}
	}
	return 0 ;
}
