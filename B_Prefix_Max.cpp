#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s;
        cin>>s;
        int arr[s];
        for(int i=0;i<s;i++)
        {
            cin>>arr[i];
        }
        int large_num =0;
        for(int i=0;i<s;i++)
        {
            if(arr[i]>large_num)
            large_num=arr[i];
        }
        cout<<large_num*s<<"\n";
    }
}