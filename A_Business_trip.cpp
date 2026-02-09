#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    vector<int>arr(12);
    for(int i=0;i<12;i++)   cin>>arr[i];
    sort(arr.begin(),arr.end());
    reverse(arr.begin(),arr.end());
    int total =accumulate(arr.begin(),arr.end(),0);
    int count =0;
    if(k==0) cout<<0;
    else if(total<k)
    {
        cout<<-1;
    }
    else 
    {
        int sum =0;
        int i=0;
        while(sum<k)
        {
            count++;
            sum+=arr[i];
            i++;
        }
        cout<<count;

    }
    return 0;

}