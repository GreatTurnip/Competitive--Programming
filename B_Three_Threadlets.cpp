#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t; 
    while(t--)
    {
        long long a,b,c;
        cin >>a >> b >> c;
        long long sum = a+ b +c;
        int n = 3;//threadlet number
        bool ans = false;
        for(int n =3;n<=6;n++)// for three max cut threadlets can be 6 
        {
            if(sum%n!=0) continue; // if doesnt match skip 
            long long l = sum / n; // length of each threadlet
        
            if(a%l==0 && b%l==0 && c%l== 0)//check if divisible
            {
                ans = true;
            }
        }
        
        if(ans) cout << "yes"<<endl;
        else cout << "no"<<endl;
    }
}