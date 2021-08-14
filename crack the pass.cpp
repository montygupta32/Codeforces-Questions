#include<bits/stdc++.h> 
using namespace std; 

void crack(int number, int x, int k) 
{ 
    if (k == 0) 
    { 
        cout << number << " "; 
        return; 
    } 
    for (int i = (x + 1); i < 10; i++) 
        crack(number * 10 +i, i, k - 1); 
}  
void password(int k) 
{ 
    crack(0, 0, k); 
} 
int main() 
{ 
    int k = 3; 
    password(k); 
    return 0; 
} 