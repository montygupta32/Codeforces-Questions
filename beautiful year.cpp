#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int i=num+1; i<=9012; i++){
        string s = to_string(i);
        set<int> uniDigits(s.begin(),s.end());
        if(s.size()==uniDigits.size()){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}