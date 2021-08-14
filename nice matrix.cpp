#include<bits/stdc++.h>
using namespace std;
 
int med(int a,int b, int c, int d){
    vector <int> v;
    sort(v.begin(),v.end());
    return ((v[1]+v[2])/2);
}
int main(){
    int tc; cin>>tc;
    while(tc--){
        int n,m; cin>>n>>m;
        int mat[n+1][m+1];
        for(int i=0; i<=n; i++){
            for(int j=0; j<=n; j++){
                cin>>mat[i][j];
            }
        }
        int ans[n+1][m+1];
        for(int i=0; i<=n; i++){
            for(int j=0; j<=n; j++){
                ans[i][j] = med(mat[i][j],mat[i][m-j+1],mat[n-i+1][j],mat[n-i+1][m-j+1]);
            }
        }
        int res = 0;
        for(int i=0; i<=n; i++){
            for(int j=0; j<=n; j++){
                res+=abs(mat[i,j]-ans[i][j]);
            }
        }
        cout<<res<<endl;
    }
    return 0;
}