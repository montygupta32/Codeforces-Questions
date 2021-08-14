#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        int k=0;
        for(int i=0; i<n; i++){
            if(i%2==0)
            cout<<a[k]<<" ";
            else{
            cout<<a[n-k-1]<<" ";
            k++;
            }
        }
        cout<<endl;
    }
    return 0;
}