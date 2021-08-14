#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int count = 0,sum=0; 
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]>=0){
            count++;
            sum+=a[i];
        }
    }
    vector<int> v;
    for(int i=0; i<n; i++){
        if(a[i]<0){
            v.push_back(a[i]);
        }
    }
    sort(v.begin(),v.end());
    for(int i=v.size()-1; i>=0; i--){
        int temp = abs(v[i]);
        if(sum>0 && sum>=temp){
            sum=sum+v[i];
            count++;
        }
    }
    if(v.size()==0){
        cout<<n<<endl;
    }
    else{
        cout<<count<<endl;
    }
    return 0;
}