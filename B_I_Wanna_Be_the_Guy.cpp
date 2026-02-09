#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k,x;
    cin >> k;
    set<int>a,b;
    for(int i=0;i<k;i++)
    {
        cin >> x;
        a.insert(x);
    }
    cin >> k;
    for(int i=0;i<k;i++)
    {
        cin>> x;
        b.insert(x);
    }
    a.insert(b.begin(),b.end());
    bool correct = true;
    for(int i=1;i<=n;i++)
    {
        if(a.find(i)==a.end()) 
        {
            correct = false;
            break;
        }
    }
    if(correct) cout<<"I become the guy."<<endl;
    else cout<< "Oh, my keyboard!"<<endl;
}