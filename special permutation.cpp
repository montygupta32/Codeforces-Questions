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
        a[n] = 1;
        for(ll i=1; i<n; i++){
            a[i] = i+1;
        }
        for(ll i=1; i<=n; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}