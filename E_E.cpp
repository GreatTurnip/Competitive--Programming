#include<bits/stdc++.h>
using namespace std;
int main()
{
    int low=1,high=1000000;
    while(low<high)
    {
        int middle = (low+high+1)/2;
        cout<<middle<<endl;
        cout.flush();
        string ans;
        cin>>ans;
        if(ans=="<")    high = middle-1;
        else    low = middle;
    }
    cout<<"! "<<low<<endl;
    cout.flush();
    return 0;
}