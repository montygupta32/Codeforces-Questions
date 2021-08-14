#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc,n;
    int a[n],b[n];
    cin>>tc;
    while(tc--){
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int s=0,l=n-1;
        int flag = true;
        for(int i=0; i<n; i++)
        {
            if(flag)
            b[i]=a[l--];
            else
            b[i]=a[s++];
            flag=!flag;
            cout<<b[i];
        }
        cout<<endl;
    }
    return 0;
}