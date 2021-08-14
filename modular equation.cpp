#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll n, m;cin>>n>>m;
        ll total = 0;
        vector<ll> me(n+1, 1);
        for(ll i=2; i<=n; i++)
        {
            ll x = m%i;
            total += me[x];
            for(ll a = x;a<=n;a+=i)
            {
                me[a]++;
            }
        }
        cout<<total<<endl;
    }
    return 0;
}