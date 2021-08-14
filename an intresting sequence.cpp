#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
ll gcd(ll a, ll b){
    if(b==0)
    return a;

    return gcd(b,a%b);
}
int main() {
    ll tc;
    cin>>tc;
    while(tc--){
    	ll k;
    	cin>>k;
    	ll sum = 0,t=3,p=3;
    	ll n = (4*k*k) +k;
    	for(ll i=k+1; i<=n; i+=t){
    		sum+=gcd(i,i+p);
    		if(t==3){
    			
			}
			else{
				t+=2;
			}
			p+=2;	
		}
		cout<<sum<<endl;
    }
	return 0;
}