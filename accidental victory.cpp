#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,max=0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]>max){
                max=a[i];
            }
        }
        int count = 0;
        for(int i=0; i<n; i++){
            if(a[i]>=max/2)
            count++;
        }
        cout<<count<<endl;
        for(int i=0; i<n; i++){
            if(a[i]>=max/2)
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}