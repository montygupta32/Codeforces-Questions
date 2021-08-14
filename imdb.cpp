#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,x;
        cin>>n>>x;
        int s,r;
        int max = 0;
        while(n--){
            cin>>s>>r;
            if(s<=x){
                if(max<r){
                    max = r;
                }
            }

        }
        cout<<max<<endl;
    }
    return 0;
}