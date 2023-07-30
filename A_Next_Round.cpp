#include <bits/stdc++.h>
using namespace std;
int main(){
   int n,k,count=0;
   cin>>n>>k; 
   int a[n];
   for (int i = 0; i < n; i++)
   {
    cin>>a[i];
   }
   for(int i=0;i<n;i++)
   {
    if(a[k-1]==0 && a[i]>a[k-1])
    { 
    count++;
    }
    if(a[i]>=a[k-1]&&a[k-1]!=0)
    {
      count++;  
    }
   }
   cout<<count;
}