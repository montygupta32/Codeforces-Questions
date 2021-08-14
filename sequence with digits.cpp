#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ll tc;
    cin>>tc;
    cin.ignore();
    while(tc--){
        ll a,k;
        cin>>a>>k;
        int flag=0;
        while(--k){
            ll mx = a%10;
            ll mn = a%10;
            ll x = a;
            while(x){
                ll last = x%10;
                if(last>mx)
                mx=last;
                if(last<mn)
                mn=last;
                x=x/10;
            }
            if(mx==0 || mn==0){
                cout<<a<<endl;
                flag=1;
                break;
            }
            a = a + (mx*mn);
        }
        if(flag!=1){
            cout<<a<<endl;
        }
    }
    return 0;
}