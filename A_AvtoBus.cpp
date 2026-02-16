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
        long long mn=-1,mx=-1;
        if (n < 4 || n == 5) 
        {
            cout << -1 << endl;
            continue;
        }
        //max
        if(n%4==0)  mx = n/4;
        else if(n%4==2) mx=(n-6)/4+1;
        //min
        if(n%6==0)  mn = n/6;
        else if(n%6==2) mn = (n-8)/6 + 2;
        else if(n%6==4) mn =(n-4)/6 +1;
        if(mn==-1||mx==-1) cout<<-1<<endl;
        else    cout<<mn<<" "<<mx<<endl;
        
    }
}