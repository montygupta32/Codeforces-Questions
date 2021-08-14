#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    int count =0;
    int total = (n*(n+1))/2;
    for(int i=0; i<n; i++){
        int sum=0;
        for(int j=i; j<n; j++){
            if(sum+a[j]<t){
                sum=sum+a[j];
                count ++;
            }
            else 
            break;
        }
    }
    float probability = count/total;
    cout <<probability<<endl;
    return 0;
    
    
}