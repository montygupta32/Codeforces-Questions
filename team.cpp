#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b,c;
    int result=0;
    while(n--){
        cin>>a>>b>>c;
        int count = 0;
        if(a==1){
            count++;
        }
        if(b==1){
            count++;
        }
        if(c==1){
            count++;
        }
        if(count>=2){
            result++;
        }
    }
    cout<<result<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5];
    int b=3;
    for(int i=0; i<4; i++){
        cin>>a[i];
    }
    sort(a,a+4);
    for(int i=0; i<3; i++){
        if(a[i]!=a[i+1]){
            b--;
        }
    }
    cout<<b<<endl;
    return 0;
}