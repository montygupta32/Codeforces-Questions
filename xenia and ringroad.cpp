#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ll n,m;
    cin>>n>>m;
    ll i=1;
    ll a;
    ll ans=0;
    while(m--){
        cin>>a;
        if(a>i){
            ans += a-i;
        }
        else if(a<i){
            ans+= (n-i+a);
        }
        i=a;
    }
    cout<<ans<<endl;
    return 0;
}
