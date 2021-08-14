#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int a;
        int type1=0,type3=0;
        for(int i=0; i<n; i++){
            cin>>a;
            if(a==1){
                type1++;
            }
            else if(a==3){
                type3++;
            }
        }
        cout<<type1 + type3<<endl;
    }
    return 0;
}