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
        vector<string> a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        string s = "";

        for( int i = 0; i < n; i++)
        {
            string front = a[i] + s;
            string back = s + a[i];

            if(i==0)
                s=a[i];
            else
            {
                if(front<back)
                {
                    s = front;
                }
                else    s = back;
            }
        }
        cout << s << endl;
    }
}