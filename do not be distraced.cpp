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
        char str;
        int fact = 1;
        for(int i=0; i<n; i++){
            if(s[i]==s[i+1]){
                str = s[i+1];
            }
            else{
                for(int j=i+1; j<n; j++){
                    char str1 = s[j];
                    if(str==str1){
                        fact = 0;
                        break;
                    }
                }
            }
        }
        if(fact==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}