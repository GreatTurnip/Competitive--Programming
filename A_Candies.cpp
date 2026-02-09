#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long sum = 3;
        long long term = 4;
        while(sum<=n)
        {
            if(n%sum==0)
            {
                cout<<n/sum<<endl;
                break;
            }
            sum+=term;
            term*=2;
        }
    }
}