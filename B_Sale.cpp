#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector <int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr.begin(),arr.end());
    int sum=0;
    int i=0;
    while(m--)
    {
        if(arr[i]<0)    sum+=abs(arr[i]);
        i++;
    }
    cout<<sum;
}
