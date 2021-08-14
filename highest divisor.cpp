#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int div=n,max;
    for(int i=1; i<=10; i++){
        if(n%i==0){
            if((n/i)<div){
                div = n/i;
                max = i;
            }
        }
    }
    cout << max << endl;
    return 0;   
}