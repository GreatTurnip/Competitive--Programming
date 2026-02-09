#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y;
    cin >> y;
    y++;
    bool isUnique = false;
    while(!isUnique)
    {
        string s = to_string(y);
        set<char>seen;
        bool yes = true;
        for(char c:s)
        {
            if(seen.count(c)) 
            {
                yes= false;
                break;
            }
            else
            {
                seen.insert(c);
            }
        }
        if(yes) isUnique=true;
        else y++;
    }
    cout<<y;
}