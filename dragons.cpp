#include<bits/stdc++.h>

using namespace std;
int main(){
    int s,n;
    cin>>s>>n;
    int x[n],y[n];
    for(int i=0; i<n; i++){
        cin>>x[i]>>y[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(x[j]>x[j+1])
            {
                swap(x[j],x[j+1]);
                swap(y[j],y[j+1]);
            }
        }
    }
    int fact = 0;

    for(int i=0; i<n; i++){
        if(s<=x[i]){
            break;
        }
        else{
            s = s+y[i];
        }
        fact++;
    }
    if(fact==n){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}