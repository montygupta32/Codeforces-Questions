#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int x;
        cin>>x;
        int ans;
        int digit = 0;
        int a = x%10;
        while(x>0){
            x = x/10;
            digit++;
        }
        if(digit ==1){
            ans = (a-1)*10 + 1; 
        }
        else if(digit ==2){
            ans = (a-1)*10 + 3; 
        }
        else if(digit ==3){
            ans = (a-1)*10 + 6; 
        }
        else if(digit ==4){
            ans = (a-1)*10 + 10; 
        }
        cout<<ans<<endl;
    }
    return 0;
}