#include<bits/stdc++.h>
using namespace std;
int cal_hr(string time, int t){
    int hour;
    hour = 10*(time[0+t]-'0')+ 1*(time[1+t]-'0');
    if(time[6+t]=='P'){
        if(hour!=12)
        hour+=12;
    }
    if(time[6+t]=='A'){
        if(hour==12)
        hour-=12;
    }
    return hour;
}
int cal_min(string time, int t){
    int min;
    min = 10*(time[3+t]-'0') + time[4+t]-'0';
    return min;
}
int main(){
    long long t;
    cin>>t;
    cin.ignore();
    while(t--){
        string cheftime;
        getline(cin,cheftime);
        int hour = cal_hr(cheftime,0);
        int min = cal_min(cheftime,0);
        string ans;
        long long n;
        cin>>n;
        while(n--){
            string friendtime;
            getline(cin,friendtime);
            int fsh = cal_hr(friendtime,0);
            int fsm = cal_min(friendtime,0);
            int feh = cal_hr(friendtime,9);
            int fem = cal_min(friendtime,9);

            if(hour<fsh || hour>feh)
            ans.push_back('0');
            else if(fsh == hour && fsm> min) 
                ans.push_back('0');
            else if(feh == hour && fem< min) 
                ans.push_back('0');
            else 
                ans.push_back('1');
        }
        cout<<ans<<endl;
    }
    return 0;

}