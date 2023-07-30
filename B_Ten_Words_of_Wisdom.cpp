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
        int arr[n][2];
        for (int i = 0; i < n; i++)
        {
           for (int j = 0; j < 2; j++)
           {
            cin>>arr[i][j];
           }
           
        }
        int count=0,p=0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i][1]>count&&arr[i][0]<=10){
              p=i+1;
              count=arr[i][1];
            }
           
        }
        cout<<p<<endl;

        
    }
    return 0;
}