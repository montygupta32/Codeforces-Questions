#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        unordered_map <int,int> ct,pos;
        int result =-1;
        int min = INT_MAX;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            pos[x]=i+1;
            ct[x]++;
        }
        for(auto it: ct){
            if(it.second==1 && min>it.first){
                min = it.first;
                result = pos[it.first];
            }
        }
        cout<<result<<endl;

    }
    return 0;
}