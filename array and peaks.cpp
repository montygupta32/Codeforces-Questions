#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        if (2 * k >= n)
        {
            cout << "-1" << endl;
        }
        else
        {
            int a[n + 1];
            for (int i = 1; i < n + 1; i++)
            {
                a[i] = i;
            }
            for (int i = 2; i < n; i += 2)
            {
                if (k > 0)
                {
                    swap(a[i], a[i + 1]);
                }
                k--;
            }

            for (int i = 1; i < n + 1; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}