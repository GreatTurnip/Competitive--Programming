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
        int sum =0;
        int count = 0;
        int i=1;
        while(sum<=n)
        {
            sum+=i;
            i++;
            count ++;
        }
        cout<<count-1<<endl;
    }
}