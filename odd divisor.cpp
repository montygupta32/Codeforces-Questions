#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
bool check(ll n){
    return (ceil(log2(n)) == floor(log2(n)));
}
int main(){
    ll tc; 
    cin>>tc;
    while(tc--){
        ll n;
        cin>>n;
        if(check(n))
        cout<<"No"<<endl;
        else
        cout<<"Yes"<<endl;
    }
    
    return 0;
}