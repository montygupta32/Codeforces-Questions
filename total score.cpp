#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        ll n,k;
        cin>>n>>k;
        ll a[k];
        ll sum = 0;
        for(ll i=0; i<k; i++){
            cin>>a[i];
        }
        for(ll i=0; i<n; i++){
            string s;
            cin>>s;
            for(ll i=0; i<k; i++){
                if(s[i]=='1')
                sum = sum + a[i];
            }
            cout<<sum<<endl;
            sum = 0;
        }
        
    }
    return 0;
}