#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll tc;
    cin>>tc;
    while(tc--) {
        ll n,k;
        cin>>n>>k;
        ll a[n],b[n];
        ll cnt = 0;
        for(ll i=0; i<n; i++) {
            cin>>a[i];
            b[i] = a[i];
        }
        sort(b,b+n);
        bool fact = false;
        ll idx;
        for(ll i=0; i<n; i++) {
            if(!fact) {
                cnt++;
                idx = lower_bound(b, b+n, a[i]) - b;
            }
            if(a[i]==b[i] && idx<n) {
                idx++;
                fact = true;
            }
            else {
                i--;
                fact = false;
            }
        }
        if(k>=cnt)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}