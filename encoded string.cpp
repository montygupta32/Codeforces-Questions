#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    char a[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p'};
    int t;
    cin >>t;
    int bit = 0;
    int decimal = 0;
    while(t!=0){
        int n;  //lenght of string
        cin >>n;
        string s;
        cin >>s;
        for(int i=0; i<s.length(); i++){ 
            ++bit;
            if(s[i] == 1)
            {
                decimal += pow(2,(4-bit));
            }

            if(bit ==4){
                cout <<a[decimal]<< endl;
                bit = 0;
                decimal = 0;
            }
            t--;
        } 

        return 0;

    }
}