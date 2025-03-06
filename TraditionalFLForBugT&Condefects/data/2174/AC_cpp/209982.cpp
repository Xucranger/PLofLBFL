#include <iostream>
using namespace std;
int main()
{
    float a,b;
   while(cin>>a>>b){
    if(b==0){
        cout<<"error"<<endl;
    }else{
        float c=0;
        c=a/b;
        int d=(int)(c*10);
       if((d%10)>=5){
            cout<<(int)(c)+1<<endl;
       }else{
            cout<<d/10<<endl;
        }
    }
   }
    return 0;
}
