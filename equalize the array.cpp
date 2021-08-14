#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
    int n,a[100],c[105]={0},max=-1,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        c[a[i]]++;
        if(c[a[i]]>max)
         max=c[a[i]];
    }
    cout<<n-max;
    }
    return 0;
    }