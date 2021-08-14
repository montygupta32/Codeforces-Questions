#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void sort(int a[],int n)
{
    int count1=0, count2=0, count3=0;

    for(int i=0; i<n; i++)
    {
        if(a[i]==0)
        {
            count1++;
        }
        if(a[i]==1)
        {
            count2++;
        }
        if(a[i]==2)
        {
            count3++;
        }
        
    }
    for(int i=0; i<count1; i++)
    {
        a[i]=0;
    }
    for(int i=count1; i<n-count3; i++)
    {
        a[i]=1;
    }
    for(int i=n-count3; i<n; i++)
    {
        a[i]=2;
    }
}

void print_array(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout <<a[i]<< " ";
    }
}
int main()
{
    int a[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int n = sizeof(a)/sizeof(int);
    sort(a,n);
    print_array(a,n);
    return 0;    
}

