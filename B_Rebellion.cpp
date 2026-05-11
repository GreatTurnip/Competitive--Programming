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
        int a[n];
        for(int i = 0;i < n;i++)
        {
            cin >> a[i];
        }
        int count = 0;
        int slow = 0 , fast = n - 1;
        while(slow < fast)
        {
            if(a[slow] == 0)  slow ++;
            else if(a[fast] == 1)   fast --;
            else
            {
                count ++;
                slow ++;
                fast --;
            }
        }
        cout << count << endl;
    }
}