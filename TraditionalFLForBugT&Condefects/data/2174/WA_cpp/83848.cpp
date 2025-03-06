#include<iostream>
#include<cstring>
using namespace std;
int main()
{
   char a[100];
   while(cin>>a)
   {
      int len=strlen(a);
      cout<<len<<endl;
      for(int i=len-1;i>=0;i--)
        cout<<a[i]<<endl;
   }
}
