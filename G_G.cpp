#include<bits/stdc++.h>
using namespace std;
double answer(double x, int p,int q,int r,int s,int t,int u)
{
    return p*exp(-x)+q*sin(x)+r*cos(x)+s*tan(x)+t*x*x+u;
}
int main()
{
    int p,q,r,s,t,u;
    while(cin>>p>>q>>r>>s>>t>>u)
    {
        double float low = 0.0,high = 1.0;
        if(answer(low,p,q,r,s,t,u)*answer(high,p,q,r,s,t,u)>0)
        {
            cout<<"No solution"<<endl;
            continue;
        }
        double mid;
        int n=50;
        while(n--)
        {
            mid = (low+high)/2;
            if(answer(low,p,q,r,s,t,u)*answer(mid,p,q,r,s,t,u)<=0)
            {
                high = mid;
            }
            else    low = mid;
        }
        cout<<fixed<<setprecision(4)<<mid<<endl;
    }
}