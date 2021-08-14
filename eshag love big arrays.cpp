#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc; cin>>tc;
    while(tc--){
        int n; cin>>n;
        int a[n];
        int min = INT_MAX;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(min>a[i]){
                min = a[i];
            }
        }
        int count = 0;
        for(int i=0; i<n; i++){
            if(a[i]>min){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}