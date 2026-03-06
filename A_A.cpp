#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int upper_bound = 2000000000;
    int lower_bound = -2000000000;
    while(n--)
    {
        string s,answer;
        int num;
        cin >>s >>num>>answer;
        if(s==">")
        {
            if(answer=="Y")  lower_bound = max(lower_bound,num+1);
            else    upper_bound = min(upper_bound,num);
        }
        else if(s=="<")
        {
            if(answer=="Y")    upper_bound = min(upper_bound,num-1);
            else    lower_bound = max(lower_bound,num);
        }
        else if(s==">=")
        {
            if(answer=="Y")    lower_bound = max(lower_bound,num);
            else    upper_bound = min(upper_bound,num-1);
        }
        else
        {
            if(answer=="Y")    upper_bound=min(upper_bound,num);
            else    lower_bound = max(lower_bound,num+1);
        }
    }
     if(lower_bound<=upper_bound)
            cout<<lower_bound<<endl;
     else
            cout<<"Impossible"<<endl;
    return 0;
}