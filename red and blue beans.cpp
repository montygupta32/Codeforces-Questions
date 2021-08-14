#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        ll r, b, d;
        cin >> r >> b >> d;
        if(d == 0) cout << (r == b ? "YES" : "NO") << endl;
        else if(abs(r - b) <= d) cout << "YES" << endl;
        else
        {
            ll k = max(r, b);
            ll l = min(r, b);
            if(l * (1 + d) >= k) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}