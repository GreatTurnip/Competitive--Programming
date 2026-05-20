#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string binary;
        int ones = 0;
        cin >> binary;
        for(int i = 0; i < n; i++)
        {
            if(binary[i]=='1')
                ones++;
        }
        int totalones = 0;
        totalones = ones * (ones - 1) + (n - ones) * (ones + 1);
        cout << totalones << endl;
    }
}
