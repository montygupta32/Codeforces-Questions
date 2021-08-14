#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n+1];
    int max = 0;
    int b;
    for(int i=1; i<n+1; i++){
        cin>>a[i];
        if(max<=a[i]){
            max=a[i];
            b = i;
        }
    }
    if(max>m){
        cout<<b<<endl;
    }
    else{
        cout<<n<<endl;
    }
    return 0;

}