#include <bits/stdc++.h>
using namespace std;
int main()
{
    int matrix[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>matrix[i][j];
        }
    }
    //finding 1 in matrix
    int row=0,col=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(matrix[i][j]==1)
            {
                row=i;
                col=j;
            }
        }
    }
    int count=0;
         if(row==1||row==3)
         {
            if(col==2)
            {
                cout<<1;
            }
            else{
                cout<<abs(2-col)+1;
            }
         }
         else if(col==1||col==3)
         {
            if(row==2)
            {
                cout<<1;
            }
             else{
                cout<<abs(2-row)+1;
            }
         }
         else{
            cout<<abs(col-2)+abs(row-2);
         }
    return 0;
}