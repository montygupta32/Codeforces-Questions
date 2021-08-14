#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int a[n];
        int sum =0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            sum +=a[i];
        }
        int fact = 0;
        for(int i=0; i<n; i++){
            if(a[i]!=1){
                fact = 1;
                break;
            }
        }
        if(fact==0){
            cout<<"-1"<<endl;
            continue;
        }
        if(sum%2==0){
            cout<<"0"<<endl;
        }
        else{
            cout<<"1"<<endl;
        }
    }
    return 0;
}