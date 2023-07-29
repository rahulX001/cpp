#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        
            if(a==1){
                cout<<2<<endl;
            }
            else if(a==2){
                cout<<1<<endl;
            } 
            else if(a >= 3)
            {
                int x = a % 3;
                int y = a / 3;
                if (x == 2)
                {
                    cout << y + 1 << endl;
                }
                else if (x == 1)
                {
                    cout << y + 2 << endl;
                }
                else if(x==0){
                    cout<<y<<endl;
                }
            }
            
        
    }
    return 0;
}