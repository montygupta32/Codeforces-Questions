#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count1=0,count2=0;
    for(int i=0; s[i]!='\0'; i++)
    {
        if(s[i]=='L')
        count1--;
        else if(s[i]=='R')
        count1++;
        else if(s[i]=='U')
        count2++;
        else if(s[i]=='D')
        count2--;
    }
    if(count1==0 && count2==0)
    cout << "true" << endl;
    else
    cout << "false" << endl;
    return 0;

}
