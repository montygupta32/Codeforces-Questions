#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int l;
        cin>>l;
        string s;
        cin>>s;
        int g=0,b=0;
        int fact =0;
        for(int i=0; i<l; i++){
            if(s[i]=='0'){
                b++;
            }
            else if(s[i]=='1'){
                g++;
            }
            if(g>=b){
                fact =1;
                break;
            }
        }
        if(fact==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}