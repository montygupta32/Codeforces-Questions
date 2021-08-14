#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        char a[n][n];
        int e,b,c,d;
        int fact = 1;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>a[i][j];
                if(a[i][j]=='*'){
                    if(fact==1){
                        e = i;
                        b = j;
                        fact = 0;
                    }
                    else{
                        c = i;
                        d = j;
                    }
                }
            }
        }
        if(b==d){
            if(b!=n-1){
                a[e][b+1]='*';
                a[c][d+1]='*';
            }
            else{
                a[e][b-1]='*';
                a[c][d-1]='*';
            }
        }
        else if(e==c){
            if(e!=n-1){
                a[e+1][b]='*';
                a[c+1][d]='*';
            }
            else{
                a[e-1][b]='*';
                a[c-1][d]='*';
            }
        }
        else{
            a[e][d] = '*';
            a[c][b] = '*';
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<a[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}