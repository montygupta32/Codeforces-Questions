#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int x;
        cin>>x;
        vector<int>ans;

        if(x>45) cout<<"-1"<<endl;
        else if(x<10) cout<<x<<endl;
        else{
            vector<int>v;
            int sum =0; int last = 9;
            while(sum<x && last>0){
                v.push_back(min(x-sum,last));
                sum+=last;
                last--;
            }
            for(int i=v.size()-1; i>=0; i--){
                cout<<v[i];
            }
        }
    }
    return 0;

}