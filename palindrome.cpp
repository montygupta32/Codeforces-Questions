#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    char s1[100];
    char s2[100];
    cin >> s1;
    int n = strlen(s1);
    for(int i=0; i<n; i++){
        s2[n-1-i] = s1[i];
    }
    if(strcmp(s1,s2)==0)
    cout << "YES" << endl;
    else
    cout << "NO" << endl;

    return 0;
}