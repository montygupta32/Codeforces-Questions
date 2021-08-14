#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int ans;
        if(n==3){
            if(a[0]==a[1] && a[1]!=a[2]){
                ans = 3;
            }
            else if(a[0]!=a[1] && a[1]!=a[2]){
                ans = 2;
            }
            else if(a[0]!=a[1] && a[1]==a[2]){
                ans = 1;
            }
        }
        else{
        for(int i=0; i<n-2; i++){
            if(a[i]==a[i+1] && a[i+1]!=a[i+2]){
                ans = i+3;
                break;
            }
            else if(a[i]!=a[i+1] && a[i+1]==a[i+2]){
                ans = i+1;
                break;
            }
            else if(a[i]!=a[i+1] && a[i+1]!=a[i+2]){
                ans = i+2;
                break;
            }
        }
        }
        cout<<ans<<endl;
    }
    return 0;
}