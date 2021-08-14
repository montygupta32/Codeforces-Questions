#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc; cin>>tc;
    while(tc--){
        int n; cin>>n;
        int a[n];
        vector<int> neg;
        int posmin = INT_MAX;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]<=0){
                neg.push_back(a[i]);
            }
            if(a[i]>0 && a[i]<posmin){
                posmin = a[i];
            }
        }
        if(neg.size()==n){
            cout<<n<<endl;
            continue;
        }
        int temp = 0;
        for(int i=0; i<neg.size()-1; i++){
            if(abs(neg[i]-neg[i+1])<posmin){
                temp = 1;
            }
        }
        if(temp==1) cout<<neg.size()<<endl;
        else cout<<neg.size()+1<<endl;
    }
    return 0;
}