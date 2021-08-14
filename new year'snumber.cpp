#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int x = n/2020;
        int y = n%2020;
        if(y<=x)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
    }
    return 0;
}