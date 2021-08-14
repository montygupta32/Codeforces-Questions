#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        ll count = 0;

        for (ll i = 1; i <= 9; i++)
        {
            for (ll j = i; j <= n;)
            {
                count++;
                j = j * 10 + i;
            }
        }
        cout << count << endl;
    }
    return 0;
}