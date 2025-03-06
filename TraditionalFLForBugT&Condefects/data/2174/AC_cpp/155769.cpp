#include<iostream> 
using namespace std;
int main()
{
      int a,b;
     while(scanf("%d%d",&a,&b)!=-1)
    {
             if(!b)
                 printf("error\n");
             else
                if(((a%b)*2)>=b)  cout<<(int(a/b)+1)<<endl;
                else                 cout<<(int(a/b))<<endl;
     }
return 0;
}
