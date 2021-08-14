#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int pf=-1;
        for(int i=0; i<n; i++){
            if(s[i]=='*'){
                pf=i;
                s[i]=='x';
                break;
            }
        }
        int pl=-1;
        for(int i=n-1; i>=0; i++){
            if(s[i]=='*'){
                pl=i;
                s[i]=='x';
                break;
            }
        }
        if(pf==pl){
            cout<<"1"<<endl;
            continue;
        }
        int ans =2;
        int l = pf;
        for(int i=pf; i<pl && l<<pl; i++){
            int r = l+k;
            while(r>l){
                if(r>pl || s[r]=='x'){
                    break;
                }
                if(s[r]=='*'){
                    ans++;
                    l=r;
                    s[r]='x';
                    break;
                }
                r--;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}