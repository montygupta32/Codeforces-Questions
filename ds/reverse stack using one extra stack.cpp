#include<bits/stdc++.h>
//#include<stack>
using namespace std;

void transfer(stack<int> &s1, stack<int> &s2, int n){
    for(int i=0; i<n; i++) {
        s2.push(s1.top());
        s1.pop();
    }
}
void reverseStack(stack<int> & s1) {
    stack<int> s2;
    int n = s1.size();
    for(int i=0; i<n; i++) {
        int x = s1.top();
        s1.pop();
        transfer(s1, s2, n-1-i);
        s1.push(x);
        transfer(s2, s1, n-1-i);
    }
}

int main() {
    stack<int> s;
    for(int i=1; i<5; i++) {
        s.push(i);
    }
    reverseStack(s);
    while(s.empty()== false) {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}