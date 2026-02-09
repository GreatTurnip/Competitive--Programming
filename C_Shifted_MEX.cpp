#include<bits/stdc++.h>
using namespace std;
int mex(int arr[],int n)
{
    unordered_set<int> s;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
            s.insert(arr[i]);
    }
    int m=0;
    while(s.count(m))
        m++;
    return m;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin >> arr[i];
        bool check_zero = false;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                check_zero = true;
            }
        }
        if(check_zero)
            cout<<mex(arr,n)<<"\n";
        if(check_zero==false)
        {
            int small = INT_MAX;
            for(int i=0;i<n;i++)
            {
                if(arr[i]>0)
                {
                    small = min(small,arr[i]);
                }
                
            }
             for(int i=0;i<n;i++)
                {
                    arr[i]= arr[i]-small;
                }
            cout<<mex(arr,n)<<"\n";
        }
    }
}