#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int k;
        cin>>k;
        int ans;
        if(k==100){
        	ans = 1;
		}
        else if(k>50 && k%(100-k)==0){
        	ans = k/(100-k) + 1;
		}
        else if(k<=50 && (100-k)%k==0){
            ans = (100-k)/k + 1;
        }
        else{
            int a = k, b= 100-k;
            int c=0;
            for(int i=1; i<=100; i++){
                if(a%i==0 && b%i==0){
                    c = i;
                }
            }
            ans = (a+b)/c;
        }
        cout<<ans<<endl;
    }
    return 0;
}