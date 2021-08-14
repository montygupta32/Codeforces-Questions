#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    int x=0,y=0;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]=='z')
        x++;
        if(str[i]=='o')
        y++;
    }
    if(2*x==y)
    cout << "Yes" << endl;
    else
    cout << "No" << endl;
    return 0;
}