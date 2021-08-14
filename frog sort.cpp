#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int w[n],l[n];
        for(int i=0;i<n;i++){
            cin>>w[i];
        }
        for(int i=0;i<n;i++){
            cin>>l[i];
        }
        if(n==2){
            if(w[0]<w[1])
                cout<<"0"<<endl;
            else {
                if(l[0]==1)
                    cout<<"2"<<endl;
                else
                    cout<<"1"<<endl;
            }
        }
    }
	// your code goes here
	return 0;
}