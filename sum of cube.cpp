#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        int fact=0;
        for(int i=1; i<cbrt(n); i++){
            for(int j=1; j<cbrt(n); j++){
                if((i*i*i) + (j*j*j) == n){
                    fact = 1;
                    break;
                }
            }
        }
        if(fact==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}