#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int m,h;
        cin>>m>>h;
        int bmi = m/(h*h);
        if(bmi <=18)
        cout<<"1"<<endl;
        else if(bmi>=19 && bmi<=24)
        cout<<"2"<<endl;
        else if(bmi>=25 && bmi<=29)
        cout<<"3"<<endl;
        else
        cout<<"4"<<endl;     
    }
    return 0;
}