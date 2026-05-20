#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;
    while(k--)
    {
        string s;
        cin >> s;
        int yes_num = count(s.begin(),s.end(),'Y');
        if(yes_num>=2) cout<<"NO"<<endl;
        else cout << "YES" << endl;
    }
}