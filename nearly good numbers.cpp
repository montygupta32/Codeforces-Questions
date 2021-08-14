#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        ll a,b;
        cin>>a>>b;
		if(b==1){
			cout<<"NO"<<endl;
		}
        else{
            cout<<"YES"<<endl;
            cout<<a<<" "<<a*b<<" "<<(a*b)+a<<endl;
        }
    }
    return 0;
}