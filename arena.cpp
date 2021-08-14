#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int tc;
    cin>>tc;
    while(tc--){
        long long int n,count = 0;
        cin>>n;
        long long int a[n];
        long long int m = INT_MAX;
        for (int i = 0; i <n; i++){
            cin>>a[i];
            m = min(m,a[i]);
        }
        for(int i=0; i<n; i++){
            if(a[i]==m){
                count++;
            }
        }
        cout<<(n-count)<<endl;
        
    }
    return 0;
}