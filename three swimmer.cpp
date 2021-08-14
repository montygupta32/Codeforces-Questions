#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        ll p,a,b,c;
        cin>>p>>a>>b>>c;
        ll ans;
        if(p%a==0 || p%b==0 || p%c==0){
            ans=0;
        }
        else{
            ll A,B,C;
            A = a-p%a;
            B = b-p%b;
            C = c-p%c;
            ans = min({A,B,C});
        }
        cout<<ans<<endl;
    }
    return 0;
}