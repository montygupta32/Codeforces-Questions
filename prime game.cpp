#include<bits/stdc++.h>
using namespace std;
bool checkprime(long long int n){
    long long int i;
    for(i=2; i*i<=n; i++){
        if(n%i==0){
        return false;
        }
    }
        return true;
    
}
int main(){
    long long int t,dp[1000001],i,count=0;
    scanf("%lld",&t);
    dp[0]=dp[1]=0;
    for(i=2; i<=1000000; i++){
        if(checkprime(i))
        count++;
        dp[i]=count;
        
    }
    while(t--){
        long long int x,y;
        scanf("%d %d",&x,&y);
        if(dp[x]<=y)
        printf("Chef");
        else
        printf("Divyam");
    }
    return 0;

}