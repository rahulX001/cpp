#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
      int n;
      cin>>n;
      string st[2*n-2];
      for (int i = 0; i < (2*n-2); i++)
      {
           cin>>st[i];
      }
      string st1[2];
      for (int i = 0,j=0; i < (2*n-2); i++)
      {
        if(st[i].length()==n-1)
        {
            st1[j]=st[i];
            j=1;
        }
      }
      string  str="";
      if(st1[0][0]==st1[1][st1[1].length()-2] && st1[0][1]==st1[1][st1[1].length()-1])
      {
       str =st1[1]+st1[0].at(st1[0].length()-1);
      }
      else{
        str =st1[0]+st1[1].at(st1[1].length()-1);
      }
      string rev="";
      for(int i=str.length()-1;i>=0;i--){
           rev+=str.at(i);
      }
      if (rev==str)
      {
        cout<<"YES"<<endl;
        // cout<<str<<endl;

      }
      else
      {
                cout<<"NO"<<endl;
        // cout<<str<<endl;
                

      }
      
      
    }
    return 0;
}