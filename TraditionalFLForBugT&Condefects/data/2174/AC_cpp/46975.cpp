#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b;
    while(cin>>a)
    {
         cin>>b;
         if(b==0)
              cout<<"error"<<endl;
         else
              cout<<round(a/b)<<endl;   //round 四舍五入函数 
    }
   // system("pause");
}
