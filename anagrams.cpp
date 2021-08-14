#include<bits/stdc++.h>
using namespace std;
const int alph = 26;

int main(){
    int tc;
    cin>>tc;
    while(tc--){

    string s1,s2;
    cin>>s1>>s2;
    int a1[alph] = {0};
    int a2[alph] = {0};
    for(int i=0; s1[i]!='\0'; i++)
    a1[s1[i]-'a']++;
    for(int i=0; s2[i]!='\0'; i++)
    a2[s2[i]-'a']++;
    int result=0;
    for(int i=0; i<26; i++)
    {
        result += abs(a1[i]-a2[i]);
    }
    cout << result << endl;
    }
    

}