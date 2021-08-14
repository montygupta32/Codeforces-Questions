#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
       if(n%11==0 || n%111==0){
           cout<<"YES"<<endl;
           continue;
       }
       int fact = 0;
       while(n>0){
           if(n%11==0){
               fact = 1;
               break;
           }
           n-=111;
       }
       if(fact==1){
           cout<<"YES"<<endl;
       }
       else{
           cout<<"NO"<<endl;
       }
    }
    return 0;
}