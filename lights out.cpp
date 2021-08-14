#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
int arr[5][5]={0};
 
for(int i=1;i<=3;i++){
        cin>>arr[i][1]>>arr[i][2]>>arr[i][3];
}
 
for(int i=1;i<=3;i++){
    for(int j=1;j<=3;j++)
       {
           if((arr[i][j]+ arr[i][j+1]+ arr[i+1][j] + arr[i-1][j]+arr[i][j-1]) %2 ==0)
           {
               cout<<1;
           }else
           {
               cout<<0;
           }
 
       }
       cout<<endl;
}   return 0;
}