#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int c1,c2,c3,c4;
    cin>>c1>>c3>>c4;

    int n,m;
    cin>>n>>m;
    int rick[n],cab[m];

    for(int i=0; i<n; i++){
        cin>>rick[i];
    }
    for(int i=0; i<m; i++){
        cin>>cab[i];
    }

    int rickcost=0;
    for(int i=0; i<n; i++){
        rickcost += min(c1*rick[i],c2);
    }
    rickcost=min(rickcost,c3);

    int cabcost=0;
    for(int i=0; i<n; i++){
        cabcost += min(c1*cab[i],c2);
    }
    cabcost=min(rickcost,c3);

    int min_cost = min(c4,rickcost+cabcost);

    cout << min_cost << endl;

    return 0;
}