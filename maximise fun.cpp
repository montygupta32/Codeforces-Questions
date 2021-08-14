#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        ll n;
        cin>>n;
        ll a[n],max=0,temp;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0; i<(n-1); i++){
        temp = abs(a[0]-a[i]) + abs(a[i]-a[n-1]) + abs(a[n-1]-a[0]);
        if(temp>max){
            max=temp;
        }
        
            
        }
        cout<<max<<endl;
    }
    return 0;
}