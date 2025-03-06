#include <cstdio>
#include <iostream>
using namespace std;
int main(){
    int a,b,c,m;
    while((scanf("%d %d",&a,&b))!=EOF){
        if(b==0){cout<<"error"<<endl;}
        else cout<<a/b<<endl;
    }
    return 0;
}
