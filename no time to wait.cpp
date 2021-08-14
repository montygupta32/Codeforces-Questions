#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,h,x;
    cin>>n>>h>>x;
    int a[n];
    int fact =0;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        if((x+a[i])>=h){
            fact=1;
            break;
        }
    }
    if(fact==1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}