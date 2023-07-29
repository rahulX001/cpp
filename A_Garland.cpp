#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        
        string s;
        cin>>s;
                
                vector <int> a;
        for(int i=0;i<10;i++)
        {int c=0;
            for(int j=0;j<s.length();j++)
            {
                if(i==s[j]-'0')
                {
                    c++;
                 
                }
            }
           if(c>0){  a.push_back(c);}
        }
        for(int i = 0;i < a.size();i++) {
    if(a[0] < a[i])
      a[0] = a[i];
  }
      if(a[0]==4)
      {
        cout<<-1<<endl;
      }
 
    else if(a[0]==1)
    {
        cout<<4<<endl;

    }
    else if(a[0]==2)
    {
        cout<<4<<endl;

    }
    else if(a[0]==3)
    {
        cout<<6<<endl;

    }

    }

    return 0;
}