#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int a[n];
        int c[3]={0};
        int p=n/3;
        for(int i=0; i<n; i++){
            cin>>a[i];
            c[a[i]%3]++;
        }
        int count = 0;
        for(int i=0; i<2; i++){
            if(c[0]>p){
                count += c[0]-p;
                c[1] += c[0]-p;
                c[0] = p;
            }
             if(c[1]>p){
                count += c[1]-p;
                c[2] += c[1]-p;
                c[1] = p;
            }
             if(c[2]>p){
                count += c[2]-p;
                c[0] += c[2]-p;
                c[2] = p;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}