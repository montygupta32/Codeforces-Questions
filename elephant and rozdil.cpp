#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int min = 0,count = 0;
    int b;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(min>a[i]){
            min = a[i];
            b = i;
        }
    }
    for(int i=0; i<n; i++){
        if(min==a[i]){
            count++;
        }
    }
    if(count>1){
        cout<<"Still Rozdil"<<endl;
    }
    else{
        cout<<b+1<<endl;
    }
    return 0;
}