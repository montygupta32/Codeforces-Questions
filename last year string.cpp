#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int fact =0;
        for(int i=0; i<=4; i++){
            string str1 = s.substr(0,i);
            string str2 = s.substr(n-4+i);
            string result = str1 + str2;
            if(result == "2020"){
                fact=1;
                break;
            }
        }
        if(fact==1)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
    }
    return 0;
}