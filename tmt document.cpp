#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ct=0,cm=0;
        if(n==3 && s=="TMT"){
            cout<<"YES"<<endl;
        }
        else if(n>3){
            for(int i=0; i<n; i++){
                if(s[i]=='T'){
                    ct++;
                }
                else{
                    cm++;
                }
            }
            if(ct==2*cm){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}