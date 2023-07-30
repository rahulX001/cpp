#include <bits/stdc++.h>
using namespace std;
bool check(int* arr,int l){
    int count=0;
    for (int i = 0; i < l-1; i++){
       if(arr[i]<=arr[i+1]){
        count++;
       } }
    if(count+1==l) 
    return true;
    else
    return false;;
}
void incdec(int* arr,int l,int k)
{
    for(int i=0;i<=k;i++)
    {
       arr[i]+=1; 
    }
    for(int i=k+1;i<l;i++)
    {
       arr[i]=arr[i]-1; 
    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       long count=0;
       cin>>n;
       int a[n];
       for (int i = 0; i < n; i++)
       {
        cin>>a[i];
       } 
       if(!check(a,n))
       {
        cout<<0<<endl;
       }
       else {
        int d=a[n-1]-a[n-2],p=n-2;
        int last=a[n-1];
        for(int i=n-1;i>=1;i--){
            if(a[i]-a[i-1]<d)
            {
                p=i-1;
                d=a[i]-a[i-1];
            }
        }
              
              if(d%2==0)
              {
                cout<<(d/2)+1<<endl;

              }
              else
              {
                
                cout<<(d+1)/2<<endl;


              }

       }
       
    }
    return 0;
}