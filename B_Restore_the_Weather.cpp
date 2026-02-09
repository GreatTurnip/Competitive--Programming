#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>>a(n);//a.first is the temp and a.second is the day
        vector<int>b(n);
        vector<int>res(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i].first;
            a[i].second=i;
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i=0;i<n;i++)
        {
            res[a[i].second]=b[i];
        }
        for(int i=0;i<n;i++) cout<<res[i]<<" ";
        cout<<endl;
    }   
}