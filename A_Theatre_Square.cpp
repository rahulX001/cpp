#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a;
        
        cin>>n>>m>>a;
        int b ,c, d;
        
        if(n%a==0&&m%a==0)
        {
            cout<<(long long)(n/a)*(m/a)<<endl;
            return 0;
        }
        if(n<a&&m<a){
            cout<<1<<endl;
            return 0;
        }
        b=n%a>0?n/a+1:n/a;
        c=m%a>0?m/a+1:m/a;
        cout<<(long long)b*c<<endl;
        
    
    return 0;
}