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
        int count = 0;
        for(int i=0; i<n-1; i++){
            int large = max(a[i],a[i+1]);
            int small = min(a[i],a[i+1]);
            while(large>small*2){
                small = small*2;
                count ++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}