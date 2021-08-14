#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int sum =0;
        for(int i=n; i<=(n+m);i++){
            sum ^=k+i;
        }
        cout<<sum<<endl;
    }
    return 0;
}