#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int a[n][n];
        if(n==2){
            cout<<"-1"<<endl;
        }
        else{
            int k=1;
            int p=n*n;
            bool fact = true;
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    if(fact){
                    a[i][j]=k;
                    k++;
                    fact = !fact;
                    }
                    else{
                        a[i][j] = p;
                        p--;
                        fact = !fact;
                    }
                }
            }
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    cout<<a[i][j]<<" ";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}