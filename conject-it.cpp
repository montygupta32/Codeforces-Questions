#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >>n;
        int flag =0;
        while(n!=1){
            if(n%2==0)
            n=n/2;
            else
            n=3*n+1;
            flag = 1;
        }
        if(flag==0)
        cout << "NO" << endl;
        else
        cout << "YES" << endl;
    }
    return 0;
}