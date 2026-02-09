#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin >>n;
   int a , b;
   vector<int>res;
   while(n--)
   {
        cin >> a >> b;
        int x = a+ b;
        res.push_back(x);
   }
   cout<<*max_element(res.begin(),res.end());
}