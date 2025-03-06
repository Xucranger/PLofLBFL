#include<iostream>
using namespace std;
int main()
{ int a,b,c,d,e;
  while(scanf("%d %d",&a,&b)!=EOF)
  {if(b==0)
  cout<<"error";
  else
  {c=a/b;
  d=a%b;
  e=d*10/b;
  if(e>=5)
  c++;
  cout<<c<<endl;}
}
}  
