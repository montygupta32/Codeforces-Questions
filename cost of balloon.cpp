#include <iostream>

using namespace std;

int main()

{
    int t;
    cin>>t;
    while(t--)

    {
        int gc,pc,n;
        cin>>gc>>pc>>n;
        int c,d,count1=0,count2=0;
        for(int i=0;i<n;i++)
        {
            cin>>c>>d;
            count1=(gc*c)+(pc*d)+count1;
            count2=(pc*c)+(gc*d)+count2;
        }

    if (count1<count2)
    {
        cout<<count1;
    }
    else
    {
        cout<<count2;
    }
    cout<<endl;
    }
    return 0;
}