#include<iostream>
using namespace std;
int chufa(int a,int b)
{
         int t=0;
         float m=(float)a;
         float n=(float)b;
         float s=m/n;
         float d=s-(float)(int)s;
         if(d>=0.5000000) t=(int)s+1;
         else t=(int)s;
         return t;        
}
int main()
{
	int a,b,c;
	while (scanf("%d %d", &a,&b) != EOF)
        {
		if(b==0) cout<<"error"<<endl;
        else {c=chufa(a,b);
	    cout<<c<<endl;}}
}
