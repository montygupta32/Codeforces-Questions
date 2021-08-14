#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    int a[12];
    for(int i=0; i<12; i++){
        cin>>a[i];
    }
    sort(a,a+12,greater<int>());
    int sum = 0,count=0;
    for(int i=0; i<12; i++){
        if(k>sum){
        sum += a[i];
        count++;
        }
        else{
            break;
        }
    }
    if(k<=sum){
    cout<<count<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
    return 0;
}