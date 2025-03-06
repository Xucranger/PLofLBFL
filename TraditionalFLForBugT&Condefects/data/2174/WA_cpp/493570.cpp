#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int a,b,i=0,x,n=0;
    char c[100];
    while(cin>>a>>b)
    {
        if(b==0)
           c[i]=x;
        else
            c[i]=a/b;
        i++;
        }
    n=i+1;
    for(i=0;i<n;i++)
    {
        if(c[i]==x)
            printf("error");
        else
            printf("%d",c);
    }
    return 0;
}
