#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0; i<s.length()-1; i++){
        if(s[i]==s[i+1]){
        s.erase(i,2);
        i=-1;
        }
    }
        if(s.empty())
        cout<<"Empty String"<<endl;
        else
        cout<<s<<endl;
        
    
    return 0;
}