#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ll tc; cin>>tc;
    while(tc--){
        ll n,k;
        cin>>n>>k;
        ll a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a,a+n);
        ll sum = a[n-1];
        while(k){
            sum+=a[n-2];
            n--;
            k--;
        }
        cout<<sum<<endl;
    }
    return 0;
}