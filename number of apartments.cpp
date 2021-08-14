#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc; cin>>tc;
    while(tc--){
        int n; cin>>n;
        if(n==1 || n==2 || n==4){
            cout<<"-1"<<endl;
            continue;
        }
        else if(n==3){
            cout<<"1"<<" "<<"0"<<" "<<"0"<<endl;
            continue;
        }
        else if(n==5){
            cout<<"0"<<" "<<"1"<<" "<<"0"<<endl;
            continue;
        }
        else if(n==6){
            cout<<"2"<<" "<<" "<<" "<<"0"<<endl;
            continue;
        }
        int a,b,c;
        int k = n/7;
        n = n%7;
        if(n==0){
            a=0,b=0,c=k;
        }
        else if(n==1){
            a=1,b=1,c=k-1;
        }
        else if(n==2){
            a=3,b=0,c=k-1;
        }
        else if(n==3){
            a=0,b=2,c=k-1;
        }
        else if(n==4){
            a=2,b=1,c=k-1;
        }
        else if(n==5){
            a=4,b=0,c=k-1;
        }
        else if(n==6){
            a=1,b=2,c=k-1;
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    return 0;
}