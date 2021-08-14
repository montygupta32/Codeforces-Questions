#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        ll n;
        cin>>n;
        ll a[n];
        unordered_map<ll,ll>dif;
        for(ll i=0; i<n; i++){
            cin>>a[i];
            dif[a[i]-(i+1)]++;
        }
        ll ans =0;
        for(auto i : dif){
            ll x = i.second;
            ans+=x*(x-1)/2;
        }
        cout<<ans<<endl;
    }
    return 0;
}