#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        string s;
        cin>>s;
        bool flag = false;
        ll count=0;
        if(s[0]=='1'){
            flag=true;
        }

        for(ll i=0; i<s.length(); i++){
            if(s[i]=='1'){
                flag = true;
            }
            else{
                if(flag==true)
                count++;
                flag=false;
            }
        }
        if(s[s.length()-1]=='1'){
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}