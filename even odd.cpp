#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ll n,k;
    cin>>n>>k;
    ll ans;
    if(k==1){
        ans = 1;
    }
    else if(n%2==0){
        if(k>n/2){
            ll sum = 0;
            for(ll i=(n/2)+1; i<=k; i++){
                sum = sum + 2;
            }
            ans = sum;
        }
        else{
            ll sum = 1;
            for(ll i=2; i<=k; i++){
                sum = sum + 2;
            }
            ans = sum;
        }
    }
    else if(n%2!=0){
        if(k>((n/2)+1)){
            ll sum = 0;
            for(ll i=(n/2)+2; i<=k; i++){
                sum = sum + 2;
            }
            ans = sum;
        }
        else{
            ll sum = 1;
            for(ll i=2; i<=k; i++){
                sum = sum + 2;
            }
            ans = sum;
        }

    }
        cout<<ans<<endl;
        return 0;
}