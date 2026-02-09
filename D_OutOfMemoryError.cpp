#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        
        int n,m,h;
        cin>>n>>m>>h;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        vector<int> orr(n);
        orr=arr;
        bool reset = false;
        while(m--)
        {
            int index, value;
            cin >> index >>  value;
            if(reset)
            {
                arr=orr;
                reset = false;
            }
            arr[index-1]+= value;
            if(arr[index-1] > h)
            {
                reset = true;
            }
        }
        if(reset)
        {
            arr=orr;
        }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
}