#include<bits/stdc++.h>
using namespace std;
int main(){
    int A,B,C;
    cin>>A>>B>>C;
    int c = sqrt((A*B)/C);
    int b = sqrt((A*C)/B);
    int a = sqrt((C*B)/A);
    cout<<4*(a+b+c)<<endl;
    return 0;
}