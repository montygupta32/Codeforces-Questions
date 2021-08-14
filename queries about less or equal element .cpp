#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    int count[235121];
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<m; i++) cin>>b[i];
    sort(a,a+n);
    for(int i=0;i<m;i++)
    {
        count[i] = upper_bound(a, a+n, b[i])-a;
    }
    for(int i=0;i<m;i++)
    cout<<count[i]<<" ";
    return 0;
    
}