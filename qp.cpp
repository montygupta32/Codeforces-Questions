#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
  int n,q;
  cin>>n>>q;
  int a[n];
  for(int i=0; i<n; i++){
    cin>>a[i];
  }
  int x;
  while(q--){
    cin>>x;
    int cnt = 0;
    int fact = 0;
    for(int i=0; i<n; i++){
      if(a[i]==x){
        fact = 1;
        break;
      }
      if(a[i]>x){
        cnt++;
      }
    }
    if(fact==1){
      cout<<"0"<<endl;
    }
    else{
      if(n%2==0){
        cout<<"POSITIVE"<<endl;
      }
      else{
        cout<<"NEGATIVE"<<endl;
      }
    }
  }
  return 0;
}