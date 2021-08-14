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
    int sum =0,count=0;
    for(int i=0; i<12; i++){
        if(sum<k){
        sum +=a[i];
        count++;
        }
    }
    cout<<count<<endl;
    return 0;
}