#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n=0;
    while (t--)
    {
        int a,b,c;
        
        cin>>a>>b>>c;
        if(a==1 && b==1||a==1 && c==1||b==1 && c==1)
        {
           n++;
        }

    }
    cout<<n<<endl;
    return 0;
}