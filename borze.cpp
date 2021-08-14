#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    cin>>s1;
    string result;
    int n = s1.size();
    string s2[n];
    bool a[n];
    for(int i=0; i<n; i++){
        a[i]=true;
        s2[i]=s1[i];
    }
    for(int i=0; i<n; i++){
        if(a[i]){
            if(s2[i]=="."){
                result+="0";
                a[i]=false;
            }
            if(s2[i]=="-"){
                if(s2[i+1]=="."){
                    result+="1";
                    a[i]=false;
                    a[i+1]=false;
                }
                else{
                    result+="2";
                    a[i]=false;
                    a[i+1]=false;
                }
            }            
        }
    }
    cout<<result;
    return 0;
}