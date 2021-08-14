#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        ll c;
        cin>>c;
        ll copy = c;
        ll count = 0;
        while(copy>0){
            copy = copy/2;
            count++;
        }
        ll a = pow(2,count-1)-1;
        ll b = a ^ c;
        cout<<a*b<<endl;

    }
    return 0;
}