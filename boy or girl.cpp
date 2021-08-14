#include<bits/stdc++.h>
using namespace std;
int countdigits(string s){
    unordered_map<char,int> m;
    for(int i=0; i<s.size(); i++){
        m[s[i]]++;
    }
    return m.size();
}
int main(){
    string s;
    cin>>s;
    int p = countdigits(s);
    if(p%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}