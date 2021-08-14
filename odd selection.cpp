#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        int fact = 1;
        for(int i=0; i<n; i++){
            int sum = 0;
            for(int j=i; j<=(x+i); j++){
                sum = sum +a[j]; 
            }
            if(sum%2!=0){
                fact = 0;
                break;
            }
        }
        if(fact==0)
        cout<<"No"<<endl;
        else
        cout<<"Yes"<<endl;
    }
    return 0;
}