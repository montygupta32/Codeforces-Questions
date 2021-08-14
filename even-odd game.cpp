#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int a[n];
        int alice =0, bob=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]%2==0)
            alice+=a[i];
            else if(a[i]==1)
            alice+=a[i];
            else{
                bob+=a[i];
            }
        }
        if(alice>bob)
        cout<<"Alice"<<endl;
        else if(alice==bob)
        cout<<"Tie"<<endl;
        else
        cout<<"Bob"<<endl;
    }
    return 0;
}