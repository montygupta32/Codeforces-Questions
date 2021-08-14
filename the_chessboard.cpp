#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ll tc;
    cin >>tc;
    while(tc--){
        ll x1,y1;
        ll x2,y2;
        ll flag=0;
        cin>>x1>>y1>>x2>>y2;
        if(abs(x1-x2)==0 && abs(y1-y2)==0){
       	cout << "SECOND" << endl;
        flag=1;
        }
        if(abs(x1-x2)==1 && abs(y1-y2)==1){
       	cout << "FIRST" << endl;
        flag=1;
        }
        if(abs(x1-x2)==1 && abs(y1-y2)==0){
       	cout << "FIRST" << endl;
        flag=1;
        }
        if(abs(x1-x2)==0 && abs(y1-y2)==1){
       	cout << "FIRST" << endl;
        flag=1;
        }
        if(flag==0){
        	cout<<"DRAW"<<endl;
		}
	   }
	   return 0;
        
    }
    
