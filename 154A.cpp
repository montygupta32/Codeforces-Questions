#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--) {
        int n,k;
        cin>>n>>k;
        vector<int> ans(n+1);
        for(int i=1; i<n+1; i++) {
            cin>>ans[i];
        }
        int res = INT_MIN;
        for(int i=1; i<n; i++) {
            for(int j=i+1; j<n+1; j++){
                res = max(res, i*j - k*(ans[i]|ans[j]));
            }
        }
        cout<<res<<endl;
    }
    return 0;
}