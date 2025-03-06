#include <iostream>
#include <stdlib.h>
#include<stdio.h>
#include<string>
using namespace std;
int main(){
    int beichu,chu;
    while(scanf("%d %d",&beichu,&chu)!=EOF){
        if(chu==0)
        cout<<"error"<<endl;
        else{
            int shang=beichu/chu;
            int yu=beichu%chu;
            if((2*yu)>=chu)
            shang++;
            cout<<shang<<endl;
            }
        }
        return 0;
    }
