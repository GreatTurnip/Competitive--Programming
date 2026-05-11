#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        bool same = true;
        map<int,int>count;
        for(int i=0;i<n*n;i++)
        {
            int x;
            cin>>x;
            count[x]++;
        }
        for(auto& [colour,freq]:count)
        {
            //max freq can be n(n-1)
            if(freq>n*(n-1))
            {
                same = false;
                break;
            }
            if(n==1)    same = false; //n==1 is an edge case
        }
        if(same) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}