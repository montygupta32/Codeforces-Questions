#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ll n;
    cin>>n;
    string s = to_string(n);
    ll count =0;
    for(ll i=0; i<s.size(); i++){
        if(s[i]=='4' || s[i]=='7'){
            count++;
        }
    }
    if(count == 4 || count == 7 ){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}