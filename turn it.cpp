#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int u,a,s;
        float v;
        cin>>u;
        cin>>v;
        cin>>a>>s;
        float V = sqrt(u*u - 2*a*s);
        if(u==v){
            cout<<"Yes"<<endl;
            continue;
        }
        int fact = 0;
        for(int i=1; i<=a; i++){
            if(V>v){
                fact=1;
                break;
            }
        }
        if(fact==0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}