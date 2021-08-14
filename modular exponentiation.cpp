#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int answer(ll base,unsigned int y, int mod){
    int result = 1;
    base = base % mod;
    if(base==0){
        return 0;
    }
    while(y>0){
        if(y&1) result = (result*base)%mod;
        y = y/2;
        base = (base*base)%mod;
    }
    return result;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int mod = 1000000007;
        cout<<answer(2,n-1,mod)<<endl;
    }
    return 0;
}