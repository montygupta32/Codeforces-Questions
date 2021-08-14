#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
bool isSubstring(string s1, string s2)
{
	int M = s1.size();
	int N = s2.size();
 
	for (int i = 0; i <= N - M; i++) {
		int j;
 
		for (j = 0; j < M; j++)
			if (s2[i + j] != s1[j])
				break;
 
		if (j == M)
			return 1;
	}
 
	return 0;
}
int main(){
    int tc; 
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<string> ans;
        for(int i=0; i<26; i++){
            string p;
            p.push_back(char('a'+i));
            ans.push_back(p);
        }
        for(int i=0; i<26; i++){
            for(int j=0; j<26; j++){
                string p;
                p.push_back(char('a'+i));
                p.push_back(char('a'+j));
                ans.push_back(p);
            }
        }
        for(int i=0; i<26; i++){
            for(int j=0; j<26; j++){
                for(int k=0; k<26; k++){
                    string p;
                    p.push_back(char('a'+i));
                    p.push_back(char('a'+j));
                    p.push_back(char('a'+k));
                    ans.push_back(p);
                }
            }
        }
        for(int i=0; i<ans.size(); i++){
            if(!isSubstring(ans[i],s)){
                cout<<ans[i]<<endl;
                break;
            }
        }
    }
    return 0;
}