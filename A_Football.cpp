#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int max =1;
    int maxchar = s[0];
    int count =1;
    int curchar = s[0];
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==curchar)
            count++;
        else
        {
            if(count>max)
            {
                max = count;
                maxchar = curchar;
            }
            curchar = s[i];
            count = 1;
        }
    }
    if(count>max)
    {
        max = count;
        maxchar = curchar;
    }
    if(max>=7)  cout<<"YES"<<endl;
    else    cout<<"NO"<<endl;
}