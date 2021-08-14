#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        ll l,b;
        cin>>l>>b;
        int a=__gcd(l,b);
        int sum = (l*b)/(a*a);
        cout<<sum<<endl;
    }
    return 0;
}