#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <iostream>
#include <cmath>
#include <queue>
using namespace std;
#define lson l,(l+r)/2,rt<<1
#define rson (l+r)/2+1,r,rt<<1|1
#define dbg(x) cout<<#x<<" = "<< (x)<< endl
#define pb push_back
#define fi first
#define se second
#define ll long long
#define sz(x) (int)(x).size()
#define pll pair<long long,long long>
#define pii pair<int,int>
#define pq priority_queue
int main(){
//clock_t start_time=clock();
    int a,b;
    while(cin>>a>>b){
        if(b==0)cout<<"error\n";
        else cout<<(int)((double)a/b+0.5)<<endl;
    }
//clock_t end_time=clock();
//cout<< "Running time is: "<<static_cast<double>(end_time-start_time)/CLOCKS_PER_SEC*1000<<"ms"<<endl;//输出运行时间
    return 0;
}
