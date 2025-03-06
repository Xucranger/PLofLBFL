#include <stdio.h>
#include <math.h>
        int  main() {
            int  a,b;
            float c;
            while(scanf("%d %d",&a,&b)!=EOF){
                c=b/2.0;
                if (b==0)
                    printf("error\n");
                else if ((a%b)==0)printf("%d\n",a/b);
                else if(a%b>=c)printf("%d\n",(a/b)+1);
                else printf("%d\n",a/b);
            }
        }
