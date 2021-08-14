#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc; cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        cout<<"2"<<endl;
        int a = n;
        int b = n-1;
        for(int i=1; i<=n-1; i++){
            cout<<a<<" "<<b<<endl;
            a=(a+b+1)/2;
            b--;
        }
    }
    return 0;
}