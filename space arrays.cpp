#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=1; i<n+1; i++){
            cin>>a[i];
        }
        sort(a,a+n);
        ll flag = 1;
        ll ans = 0;
        for(ll i=1; i<n+1; i++){
            if(a[i]>i){
                flag=0;
                break;
            }
            ans += i-a[i];
        }
        if(flag==0)
        cout<<"Second"<<endl;
        else{
            if(ans%2==0)
            cout<<"Second"<<endl;
            else{
                cout<<"First"<<endl;
            }
        }
    }
    return 0;
}