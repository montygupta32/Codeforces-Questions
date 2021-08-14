#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        ll n;
        cin>>n;
        if(n%2050!=0){
            cout<<"-1"<<endl;
        }
        else{
            int ans = n/2050;
            int sum =0;
            while(ans!=0){
                sum += ans%10;
                ans = ans/10;
            }
            cout<<sum<<endl;
        }
        
    }
    return 0;

}