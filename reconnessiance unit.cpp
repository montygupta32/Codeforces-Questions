#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int dif = abs(a[0]-a[n-1]);
    int b = 0, c = n-1;
    for(int i=0; i<n-1; i++){
        if(dif>(abs(a[i]-a[i+1]))){
            dif = abs(a[i]-a[i+1]);
            b = i;
            c = i+1;
        }
    }
    cout<<b+1<<" "<<c+1<<endl;
    return 0;
}