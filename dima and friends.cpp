#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,f,finger=0,result=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>f;
        finger+=f;
    }
    for(int i=1; i<=5; i++){
        if((finger+i) % (n+1)!=1){
            result++;

        }
    }
    cout<<result<<endl;
    return 0;
}