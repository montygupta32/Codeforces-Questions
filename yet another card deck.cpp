#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    int a[n];
    map<int, int> col;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(col[a[i]]==0){
            col[a[i]] = i+1;
        }
    }
    while(q--){
        int t;
        cin>>t;
        int result = col[t];
        cout<<col[t]<<" ";
        col.erase(t);
        for(auto i : col){
            if(i.second<result){
                col[i.first] = i.second + 1;
            }
        }
        col[t] = 1;
    }
    cout<<endl;
    return 0;
}