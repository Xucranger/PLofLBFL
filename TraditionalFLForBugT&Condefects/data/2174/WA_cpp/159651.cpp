#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
class panduan
{
  public:
  int p1(int x,int y,int z);
  int x,y,z,n;
  int change(int x,int y,int z);
};
int panduan::change(int x,int y,int z)
{
    if(x>y)
     {
         if(y>z)
         {
             n=x;
             x=z;
             z=n;
         }
         if(x>z)
         {
             n=x;
             x=y;
             y=n;
             n=y;
             y=z;
             z=n;
         }
         else
         {
             n=x;
             x=y;
             y=n;
         }
     }
     if(y>z)
     {
         if(x>z)
         {
             n=y;
             y=z;
             z=n;
             n=x;
             x=y;
             y=n;
         }
         else
         {
             n=y;
             y=z;
             z=n;
         }
     }
     if(x+y<z||z-y>x||x<=0||y<=0||z<=0)
     cout<<"ERROR\n";
     else if(x==y&&y==z)
     cout<<"DB\n";
     else if(x==y||x==z||y==z) cout<<"DY\n";
     else if(x*x+y*y==z*z)     cout<<"ZJ\n";
     else                      cout<<"PT\n";
}
int main()
{
     panduan p;
     int x,y,z;
     int n,m;
     int i;
     while(cin>>x>>y>>z)
     {p.change(x,y,z);}
}
