#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
long long lcm(int a, int b)
{
    return (a*b) /__gcd(a, b);
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        ll n;
        cin>>n;
        ll fmax=0,i=1,x=1;

        for(i=1; i<=n; i++){
            x=lcm(x,i);
        }
        
        fmax=(n*(n+1))/2;
        
        cout<<fmax<<" "<<x<<endl;
    }
    return 0;
}