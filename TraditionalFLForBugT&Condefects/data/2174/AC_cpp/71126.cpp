#include<iostream>
using namespace std;
int main()
{ int a,b,c;
float s,e;
  while(scanf("%d %d",&a,&b)!=EOF)
  {if(b==0)
  cout<<"error"<<endl;
  else
  {c=a/b;
   s=((float)a/(float)b);
   e=s-c;
  if(e>=0.5)
  c++;
  cout<<c<<endl;}
}
}  
