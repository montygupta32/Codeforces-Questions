#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        ll n;
        cin>>n;
        ll ans;
        while(n>0){
            if(n&(n-1)==0){
                ans = n-1;
                break;
            }
            else {
                n--;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}