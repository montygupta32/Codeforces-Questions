#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc; cin>>tc;
    while(tc--){
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        if(is_sorted(a,a+n)){
            cout<<"0"<<endl;
        }
        else{
            if(a[0]==1){
                cout<<"1"<<endl;
            }
            else if(a[0]==n-1 && a[0]==n){
                cout<<"3"<<endl;
            }
            else{
                cout<<"2"<<endl;
            }
        }
    }
    return 0;
}