#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x; 
    cin >> n>> x;
    vector<pair<int,int>> arr(n);
    for(int i=0;i<n;i++)
    {
        cin >> arr[i].first;
        arr[i].second=i;
    }
    sort(arr.begin(),arr.end());
    int l=0, r= n-1;
    int a=-1 ,b=-1;
    while(l<r)
    {
        int total = arr[l].first+arr[r].first;
        if(total == x)
        {
            a = arr[l].second;
            b = arr[r].second;
            break;
        }
        else if(total<x)  l++;
        else r--;
    }
    if(a!=-1&&b!=-1) cout<<b+1<<" "<<a+1;
    else cout<<-1;
    return 0;
}