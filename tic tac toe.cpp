#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        string s1,s2,s3;
        cin>>s1>>s2>>s3;
        ll x=0,zero=0,u_s=0;
        for(ll i=0; i<3; i++){
            if(s1[i]=='X'){
                x++;
            }
            else if(s1[i]=='O'){
                zero++;
            }
            else if(s1[i]=='_'){
                u_s++;
            }
            if(s2[i]=='X'){
                x++;
            }
            else if(s2[i]=='O'){
                zero++;
            }
            else if(s2[i]=='_'){
                u_s++;
            }
            if(s3[i]=='X'){
                x++;
            }
            else if(s3[i]=='O'){
                zero++;
            }
            else if(s3[i]=='_'){
                u_s++;
            }
        }
        ll win0 = 0, winx=0;
        if(s1[0]=='X' && s1[1]=='X' && s1[2]=='X') winx=1;        
        if(s2[0]=='X' && s2[1]=='X' && s2[2]=='X') winx=1;        
        if(s3[0]=='X' && s3[1]=='X' && s3[2]=='X') winx=1;
        if(s1[0]=='X' && s2[0]=='X' && s3[0]=='X') winx=1;
        if(s1[1]=='X' && s2[1]=='X' && s3[1]=='X') winx=1;
        if(s1[2]=='X' && s2[2]=='X' && s3[2]=='X') winx=1;
        if(s1[0]=='X' && s2[1]=='X' && s3[2]=='X') winx=1;
        if(s1[2]=='X' && s2[1]=='X' && s3[0]=='X') winx=1;

        if(s1[0]=='O' && s1[1]=='O' && s1[2]=='O') winx=1;        
        if(s2[0]=='O' && s2[1]=='O' && s2[2]=='O') winx=1;        
        if(s3[0]=='O' && s3[1]=='O' && s3[2]=='O') winx=1;
        if(s1[0]=='O' && s2[0]=='O' && s3[0]=='O') winx=1;
        if(s1[1]=='O' && s2[1]=='O' && s3[1]=='O') winx=1;
        if(s1[2]=='O' && s2[2]=='O' && s3[2]=='O') winx=1;
        if(s1[0]=='O' && s2[1]=='O' && s3[2]=='O') winx=1;
        if(s1[2]=='O' && s2[1]=='O' && s3[0]=='O') winx=1;

        if((win0==1 && winx==1) || (x-zero)<0 || (x-zero)>1) cout<<"3"<<endl;
        else if(win0==0 && winx==0 && u_s==9) cout<<"2"<<endl;
        else if(win0==0 && winx==0 && u_s==0) cout<<"1"<<endl;
        else if(win0==1 && winx==0 && x==zero) cout<<"1"<<endl;
        else if(win0==0 && winx==1 && x>zero) cout<<"1"<<endl;
        else if(win0==0 && winx==0 && u_s>0) cout<<"2"<<endl;
        else cout<<"3"<<endl;
    } 
    return 0;
}