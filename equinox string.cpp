#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
    	ll n,a,b;
    	cin>>n>>a>>b;
    	ll sar=0,anu=0;
    	string s;
    	for(int i=0;i<n; i++){
    		cin>>s;
    		if(s[0]=='E' || s[0]=='Q' || s[0]=='U' || s[0]=='I' || s[0]=='N' || s[0]=='O' || s[0]=='X'){
    			sar+=a;
			}
			else{
				anu+=b;
			}
		}
		if(sar>anu){
			cout<<"SARTHAK"<<endl;
		}
		else if(sar<anu){
			cout<<"ANURADHA"<<endl;
		}
		else if(sar==anu){
			cout<<"DRAW"<<endl;
		}
	}
    return 0;
}