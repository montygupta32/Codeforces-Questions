#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
ll gcd_sum(ll x){
    ll num = x;
    ll digitsum = 0;
    while(num>0){
        digitsum += num%10;
        num = num/10;
    }
    ll ans = __gcd(x,digitsum);
    return ans;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        ll x;
        cin>>x;
        if(gcd_sum(x)!=1){
            cout<<x<<endl;
        }
        else if(gcd_sum(x+1)!=1){
            cout<<x+1<<endl;
        }
        else if(gcd_sum(x+2)!=1){
            cout<<x+2<<endl;        
        }
    }
    return 0;
}