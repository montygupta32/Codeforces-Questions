#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int ft = a[0];
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(a[i]>=ft){
            cnt++;
            ft = a[i];
        }
        else{
            ft=a[i];
            cnt=0;
        }
    }
    cout<<cnt<<endl;
    return 0;
}