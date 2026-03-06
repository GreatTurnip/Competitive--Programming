#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int t;
    cin>>n>>t;

    // handle t=10

    if(t==10)
    {

        //when n=1 then impossible

        if(n==1) cout<<-1;
        else
        {

            //print 1 then n-1 times of 0

            cout<<1;
            for(int i=1;i<n;i++)    cout<<0;
        }
    }

    //n copies of digit t

    else
    {
        for(int i=0;i<n;i++)    cout<<t;
    }

}


