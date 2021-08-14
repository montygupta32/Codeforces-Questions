#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[100][100];
    int r,c;
    for(int i=1; i<6; i++){
        for(int j=1; j<6; j++){
            cin>>a[i][j];
            if(a[i][j]==1){
                r=i;
                c=j;
            }
        }
    }
    int result = abs(3-r) + abs(3-c);
    cout<<result<<endl;
    return 0;
}