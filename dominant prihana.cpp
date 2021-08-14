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
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        ll min = a[0];
        ll max = 0;
        ll b;
        ll fact = 0;
        for(ll i=0; i<n; i++){
            if(min !=a[i]){
                fact=1;
                break;
            }
        }
        if(fact==0){
            cout<<"-1"<<endl;
            continue;
        }
        for(ll i=0; i<n; i++){
            if(min>a[i]){
                min = a[i];
                b = i;
            }
            if(max<a[i]){
                max = a[i];
            }
        }
        ll ans;
        for(ll i=b; i<n; i++){
            if(a[i]==max){
                ans = i;
                continue;
            }
        }
        for(ll i=b; i>=0; i--){
            if(a[i]==max){
                ans = i+1;
                break;
            }
        }
        cout<<ans<<endl;       
    }
    return 0;
}