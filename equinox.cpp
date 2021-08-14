#include<bits/stdc++.h>
using namespace std;
void EvenOdd(int arr[], int size)
{
    int left = 0, right = size-1;
    while (left < right)
    {
        while (arr[left] % 2 == 0 && left < right)
            left++;
        while (arr[right] % 2 == 1 && left < right)
            right--;
 
        if (left < right)
        {
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
}
 
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        EvenOdd(a,n);
        for(int i=n-1; i>=0; i--){
            cout<<a[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}