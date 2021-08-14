#include<bits/stdc++.h>
using namespace std;
double roundof(double a){
    double ans = int(a*100 + .5);
    return (double)ans/100;

}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        double k1,k2,k3,v;
        cin>>k1>>k2>>k3>>v;
        double a = 100/(k1*k2*k3*v);
        double result = roundof(a);
        if(result>=9.58){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}