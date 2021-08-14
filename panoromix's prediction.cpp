#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if(n<=1){
        return false;
    }
    else if(n==2){
        return true;
    }
    else{
    for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
            break;
        }
    }
    }
    return true;
}
int main(){
    int n,m;
    cin>>n>>m;
    int fact =0;
    for(int i=n+1; i<m; i++){
        if(isprime(i)){
            fact=1;
            break;
        }
    }
    if(isprime(m)){
    if(fact==0){
        cout<<"YES"<<endl;
    }
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
    
}