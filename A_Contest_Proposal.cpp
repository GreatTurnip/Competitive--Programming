#include<bits/stdc++.h>
using namespace std;
int main()
{
    //handle inputs
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int target[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=0;i<n;i++) cin>>target[i];
        int count = 0;
        int i = 0 , j = 0;
        while(i < n && j < n)
        {
            if(arr[i]<=target[j])
            {
                i++;
                j++;
            }
            else{
                count ++;
                j++;
            }
        }
        // count += (n-i);
        cout<<count<<endl;
    }
}