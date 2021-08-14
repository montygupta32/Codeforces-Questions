#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,x;
        cin>>n>>x;
        int count = 1;
        if(n==1 || n==2){
            cout<<"1"<<endl;
        }
        else{
            n = n-2;
            while(n>x){
                n = n-x;
                count++;
            }
            int ans = count + 1;
            cout<<ans<<endl;
        }
    }
    return 0;
}