#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long> res;
        long long p = 10 ; // for 10*1
        int k =1;
        while(p<= n)
        {
            if(n%(1+p)==0)
            {
                long long x = n/(1+p);
                res.push_back(x);
            }
            p *= 10;
            k++;
        }
        reverse(res.begin(),res.end());
        cout << res.size() << endl;
        for(long long x : res)
        {
            cout<< x << " ";
        }
        cout<<endl;
    }
}