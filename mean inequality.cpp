#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n; cin>>n;
        int a[2n];
        for(int i=0; i<2*n; i++){
            cin>>a[i];
        }
        sort(a,a+2*n);
        int l=0,r=2n-1;
        vector<int>v;
        while(l<r){
            v.push_back(a[r]);
            v.push_back(a[l]);
            l++;
            r--;
        }
        for(int i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}