#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        string s1;
        cin>>s1;
        string s2 = "party";
        string s3 = "pawri";
        int s2len = s2.length();
        s1.replace(s1.find(s2),s2.size(),s3);
        cout<<s1<<endl;
    }
    return 0;
}