#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    int sum = accumulate(a.begin(),a.end(),0);
    sort(a.rbegin(), a.rend());
    int count =0;
    int sum2=0;
    for(int i = 0; i < n; i++) {
        sum2 += a[i];
        count++;
        if(sum2*2>sum)  break;
    }
    cout<<count<<endl;
}