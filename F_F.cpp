#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ing;
    cin >>ing;
    long long kb,ks,kc; // in kithcen 
    cin >> kb>>ks>>kc;
    long long cb,cs,cc;
    cin >>cb>>cs>>cc; //price
    long long money;
    cin>> money;
    long long b,s,c; //ing per burger
    b=0;s=0;c=0;
    for(char ch : ing)
    {
        if(ch=='B') b++;
        if(ch=='S') s++;
        if(ch=='C') c++;
    }
    long long low = 0;
    long long high = 2e12;
    long long answer=0;
    while(low<=high)
    {
         long long mid = (low+high)/2;
         long long reqb = max(0LL,mid*b-kb);
         long long reqs = max(0LL,mid*s-ks);
         long long reqc = max(0LL,mid*c-kc);
        long long cost = reqb*cb + reqc*cc + reqs*cs;
        if(cost<=money)
        {
            answer=mid;
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
    cout<<answer<<endl;
    return 0;
}