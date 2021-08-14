#include<iostream>
using namespace std;
typedef long long int ll;

int main(){
    ll t;
    cin>>t;
    while(t!=0){
        ll n,k,d,sum=0,i;
        cin>>n>>k>>d;
        ll a[n];
        for(i=0; i<n; i++){
            cin>>a[i];
            sum = sum + a[i];
        }
        ll ans = sum/k;
        if(ans<=d)
           cout<<ans<<endl;
        else
           cout<<d<<endl;

           t--;
    }
    return 0;
}