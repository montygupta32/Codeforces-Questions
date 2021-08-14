#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    int tp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(i==k-1){
            tp = a[i];
        }
    }
    int count = 0;
    for(int i=0; i<n; i++){
        if(a[i]>=tp && a[i]>0) count++;
    }
    cout << count << endl;

    return 0;
}