#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char matrix[8][8];
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>matrix[i][j];
        }
    }
    string str="";
     for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(matrix[i][j]!='.')
            {
              str+= matrix[i][j];
            }
        }
    }
    cout<<str<<endl;

    }
    return 0;
}