#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        ll a,b,ans=1e18,count;
        cin>>a>>b;
        for(ll i=0; i*i<=a; i++){
            if(b==1 && i==0)
            continue;
            count=i;
            ll p=a;
            while(p){
                p = p/(b+i);
                count++;
            }
            ans = min(ans,count);
        }
        cout<<ans<<endl;
        
    }
    return 0;

}