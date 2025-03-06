#include<iostream>
using namespace std;
int main()
{ int a,b,c;
double s,e;
  while(scanf("%d %d",&a,&b)!=EOF)
  {if(b==0)
  cout<<"error";
  else
  {c=a/b;
   s=((double)a/(double)b);
   e=s-c;
  if(e>=0.5)
  c++;
  cout<<c<<endl;}
}
}  
