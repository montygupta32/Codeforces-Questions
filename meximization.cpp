#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        map<int,int> mp;
        vector<int> v;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            mp[a]++;
            if(mp[a]>1){
                v.push_back(a);
            }
        }
        for(auto x: mp){
            cout<<x.first<<" ";
        }
        for(auto k: v){
            cout<<k<<" ";
        }
        cout<<endl;
    }
    return 0;
}