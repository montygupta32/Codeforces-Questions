#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, time, min_time(1000000001), min_index(0), count(1);
    cin>>n;
    for (int i = 1; i <= n; ++i)
    {
        cin>>time;
        if (time < min_time)
        {
            min_time = time;
            min_index = i;
            count = 1;
        }
        else if (time == min_time)
        {
            count += 1;
        }
    }
    if (count == 1)
    {
        cout<<min_index<<endl;
    }
    else
    {
        cout<<"Still Rozdil"<<endl;
    }
    return 0;
}