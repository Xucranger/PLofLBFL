#include<iostream>
using namespace std;
int main()
{
    int a,b;
    float c;
    while(cin>>a>>b)
    {
        if(b==0)
            printf("error\n");
        else
        {
            c=(float)a/(float)b;
            printf("%d\n",(int)(c+0.5));
        }
    }
    return 0;
 }
