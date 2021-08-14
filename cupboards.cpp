#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int l,r;
    int cntl0 = 0, cntl1=0;
    int cntr0 = 0, cntr1=0;
    for(int i=1; i<=n; i++){
        cin>>l>>r;
        if(l==0){
            cntl0++;
        }
        else{
            cntl1++;
        }
        if(r==0){
            cntr0++;
        }
        else{
            cntr1++;
        }
    }
    int ans = 0;
    if(cntl0<cntl1){
        ans = cntl0;
    }
    else{
        ans = cntl1;
    }
    if(cntr0<cntr1){
        ans = ans + cntr0;
    }
    else{
        ans =  ans + cntr1;
    }
    cout<<ans<<endl;
    return 0;
}