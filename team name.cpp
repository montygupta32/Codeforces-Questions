#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        ll n;
        string arr[n];
        cin>>n;
        ll ans = 0;
        for(ll i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        string a,b;
        for(ll i=0; i<n; i++){
            for(ll j=i+1; j<n; j++){
                a=arr[i];
                b=arr[j];
                swap(a[0],b[0]);
                if(a==b){

                }
                else if(a[0]==b[0]){

                }
                else if((!(binary_search(arr,arr+n,a))) && !(binary_search(arr,arr+n,b))){
                    ans = ans+2;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;

}