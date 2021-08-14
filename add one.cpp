#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        string n;
        cin>>n;
        ll m;
        cin>>m;
        ll l = n.size();
        for(ll i=0; i<l; i++){
            if(n[i]=='9'){
                l+=2;
            }
        }
    }
}