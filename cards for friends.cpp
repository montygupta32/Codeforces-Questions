#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        ll w,h,n;
        cin>>w>>h>>n;
        ll count=1;
        while(w%2==0){
            w=w/2;
            count*=2;
        }
        while(h%2==0){
            h=h/2;
            count*=2;
        }
        if(count>=n){
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
    return 0;
}