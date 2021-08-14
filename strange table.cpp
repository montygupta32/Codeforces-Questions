#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        ll n,m,x;
        cin>>n>>m>>x;
        ll row = (x-1)%n;
        ll column = (x-1)/n;
        ll result = row*m + column + 1;
        cout<<result<<endl;
    }
    return 0;
}