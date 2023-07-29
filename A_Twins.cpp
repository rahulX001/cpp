#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    int check=0;
    int count=0;
   for(int i=n-1;i>=0;i--)
   {
    check+=arr[i];
    count++;
    sum-=arr[i];
    if(check>sum)
    {
        break;
    }
   }
    
    
    cout << count<< endl;
    return 0;
}