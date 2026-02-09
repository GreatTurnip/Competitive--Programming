//if n is odd x = a1 xor a2 xor ..
//if n is even x = 0;
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        int sum = 0;
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=0;i<n;i++) sum^=arr[i];
        if(n%2==0)
        {
             if(sum==0) cout<< 0 << endl;
             else cout<<-1<<endl;
        }
        else    cout<<sum<<endl;
    }
}