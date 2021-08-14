#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,w;
        cin>>n>>w;
        int a[n];
        int sum = 0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            sum = sum + a[i];
        }
        if(sum%w==0){
            cout<<sum/w<<endl;
        }
        else if(sum % w!=0){
            cout<<(sum/w)+1<<endl;
        }
    }
    return 0;
}