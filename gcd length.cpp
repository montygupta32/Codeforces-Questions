#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int digitcount(ll num){
    ll count = 0;
    while(num>0){
        num = num/10;
        count++;
    }
    return count;
}
int main(){
    ll arr[9] = {3,11,101,1009,10007,100003,1000003,10000019,100000001};
    int tc;
    cin>>tc;
    while(tc--){
        int a,b,c;
        cin>>a>>b>>c;
        ll x = arr[c-1];
        ll y = arr[c-1];
        while(digitcount(x)!=a){
            x = x*2;
        }
        while(digitcount(y)!=b){
            y = y*3;
        }
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}