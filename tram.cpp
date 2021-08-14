#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int max = 0;
    int a,b;
    int in = 0;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        in = in + b - a;
        if(max<in){
            max = in;
        }
    }
    cout<<max<<endl;
    return 0;
}