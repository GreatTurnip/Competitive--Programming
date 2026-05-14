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
        int low = n/4;
        int high = n/2;
        int answer = high; // take the worst possible case
        while(low<=high)
        {
            int mid = (low+high)/2;
            // here mid is the total animals
            int remainder = (n-2*mid);
            if(remainder >= 0 && remainder % 2 ==0)
            {
                int k = remainder/2;
                int c = mid - k;
                 if(c>=0 && k>=0)
            {
                answer = mid;
                high = mid -1;
            }
            else 
            {
                low = mid + 1;
            }
            }
            else
            {
                low = mid + 1;
            }
        }
        cout<<answer<<endl;
    }
}