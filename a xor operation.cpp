#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,a[n],b[n],k=1;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        while(k++){
            for(int i=0; i<n; i++){
                b[i]=a[i]^k;
            }
            sort(a,a+n);
            sort(b,b+n);
            if(a[n]==b[n])
            break;
        }
        cout<<k<<endl;

    }
    return 0;
}