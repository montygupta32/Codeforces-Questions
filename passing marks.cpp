#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int amin,bmin,cmin,tmin,a,b,c;
        cin>>amin>>bmin>>cmin>>tmin>>a>>b>>c;
        int t = a + b + c;
        if(a>=amin && b>=bmin && c>=cmin){
            if(t>=tmin){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}