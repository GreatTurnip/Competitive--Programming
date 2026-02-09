#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ,x;
    cin>>n>>x;
    vector <int> div;
    for(int i=1;i<=n;i++)
    {
        if(x%i==0) div.push_back(i);
    }
    int count =0 ;
    for(int a:div)
        for(int b:div)
        {
            if(a*b==x) count++;
        }
    cout<<count;
}