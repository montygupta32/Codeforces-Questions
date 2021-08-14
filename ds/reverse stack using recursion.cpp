#include<bits/stdc++.h>
//#include<stack>
using namespace std;

void insertAtBottom(stack<int> &s, int x) {
    if(s.empty()){
        s.push(x);
        return;
    }
    int y = s.top();
    s.pop();
    insertAtBottom(s,x);
    s.push(y);
}

void reverseStackRec(stack<int> &s){
    if(s.empty())
    return;
    
    int x = s.top();
    s.pop();
    reverseStackRec(s);
    insertAtBottom(s,x);
}

int main() {
    stack<int> s;
    for(int i=1; i<5; i++) {
        s.push(i);
    }
    reverseStackRec(s);
    while(s.empty()== false) {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}