#include <bits/stdc++.h>
using namespace std;
int main()
{
    // cout<<"enter the number of bags"<<endl;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int me = 0, bo = 0;
        // cout<<"enter the number of candie"<<endl;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                me += a[i];
            }
            else
            {
                bo += a[i];
            }
        }
        if (me > bo)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}