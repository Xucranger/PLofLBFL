#include <cstdio>
#include <iostream>
using namespace std;
int main(){
    float a,b,m;
    while((scanf("%f %f",&a,&b))!=EOF){
        if(b==0){cout<<"error"<<endl;}
        else{
            int f=(int)(a/b+0.5);
             cout<<f<<endl;
        }
    }
    return 0;
}
