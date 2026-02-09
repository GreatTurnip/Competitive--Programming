#include<bits/stdc++.h>
using namespace std;
bool is_inside(int a,int b,int c) // check if its inside a certain range in a clock
{
    if(b<c)
        return(a>b&&a<c);
    else 
        return(a>b || a<c);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(is_inside(c,a,b)&&!is_inside(d,a,b)) cout<<"YES"<<endl;
        else if(is_inside(d,a,b)&&!is_inside(c,a,b)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}