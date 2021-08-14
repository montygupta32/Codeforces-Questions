#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        string s;
        cin>>s;
        ll fact = 0;
        for(ll i=0; i<s.size(); i++){
            if(s[i]!='a'){
                fact = 1;
            }
        }
        if(fact==0){
            cout<<"NO"<<endl;
            continue;
        }
        string str = 'a' + s;
        string str1 = str;
        reverse(str1.begin(),str1.end());
        if(str1==str){
            cout<<"Yes"<<endl;
            cout<<s+'a'<<endl;
        }
        else{
            cout<<"Yes"<<endl;
            cout<<'a'+s<<endl;
        }
    }
    return 0;
}