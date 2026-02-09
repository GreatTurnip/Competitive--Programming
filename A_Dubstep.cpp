#include<bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    cin>>input;
    string toRemove = "WUB";
    int pos = 0;
    while((pos=input.find(toRemove))!=string::npos) input.replace(pos,toRemove.length()," ");
    bool space = true;
    for(char c:input)
    {
        if(c!=' ')
        {
            cout<<c;
            space = false;
        }
        else if(!space)
        {
            cout<<" ";
            space = true;
        }
    }
    return 0;
}