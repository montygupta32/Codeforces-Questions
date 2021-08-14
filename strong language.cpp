#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k,count=0,x=0;
        cin >> n >> k;
        char A[n];
        for(int i=0;i<n;i++){
            cin >> A[i];
        }
        for(int i=0;i<n;i++){
            if(A[i] == '*')
            {
                count++;
                if(count == k)
                {
                    cout << "YES" << endl;
                    x++;
                    break;
                }
            }
            else
                count=0;
        }
        if(x == 0)
            cout << "NO" << endl;
    }
	// your code goes here
	return 0;
}