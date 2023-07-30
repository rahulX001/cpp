#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a,b,c;
        cin>>a>>b>>c;
        cout<<a[1]<<endl;
        if(a[0]==b[1]&&b[1]==c[2]||a[0]==a[1]&&a[1]==a[2]||a[0]==b[0]&&b[0]==c[0] )
        { if(a[0]!='.'){
            cout<<a[0]<<endl;
            break;}
        }
        else if(a[1]==b[1]&&b[1]==c[1]||b[0]==b[1]&&b[1]==b[2])
        {
            if(c[1]!='.'){
            cout<<c[1]<<endl;break;}
        }
        else if(a[2]==b[2]&&b[2]==c[2]||a[2]==b[1]&&b[1]==c[0])
        {
            if(a[2]!='.'){
            cout<<a[2]<<endl;break;}
        }
        else
        cout<<"DRAW"<<endl;
        

    }
    return 0;
}