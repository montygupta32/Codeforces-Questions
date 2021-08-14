#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        int n,r;
        cin>>n>>r;
        ll a[n];
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        ll b[n];
        ll sum = 0;
        for(ll i=0; i<n; i++){
            cin>>b[i];
            sum+=b[i];
        }
        ll count = 0;
        if(n>1){
            for(ll i=0; i<n-1; i++){
                count += a[i+1] - a[i];
            }
            ll result = sum - count*r;
            cout<<result<<endl;
        }
        else{
            cout<<b[0]<<endl;
        }
    }
    return 0;
}