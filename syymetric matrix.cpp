#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,m;
        cin>>n>>m;
        int fact = 1;
        for(int i=1; i<=n; i++){
            int a,b,c,d;
            cin>>a>>b>>c>>d;
            if(a==c && b==d){
                fact = 0; 
            }
        }
        if(m*m%4==0 && fact==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}