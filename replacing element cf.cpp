#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,d;
        cin >> n >> d;
        int a[n],flag=0;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        for(int i=0; i<n; i++)
        {
            if(a[i]>d)
            flag=1;
        
        }
        if(flag==0)
        cout<<"YES"<<endl;
        else if(a[0]+a[1]<=d)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl; 
        return 0;
        
    }
}