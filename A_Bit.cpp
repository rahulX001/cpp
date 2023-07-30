#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int tmp =0;
    while(n--){
        string in;
        cin>>in;
        if(in=="X++"||in=="++X")
       {
        tmp++;
       }
       else{
        tmp--;
       }
    }
    cout<<tmp;
    return 0;
}