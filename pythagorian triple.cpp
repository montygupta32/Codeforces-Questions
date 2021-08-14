#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        ll n;
        cin>>n;
        int k = sqrt(2*n-1);
        int ans = (k-1)/2;
        cout<<ans<<endl;
    
    }
    return 0;
}