#include <bits/stdc++.h>
using namespace std;
int main()
{
   int a=9;
   int* pt = &a;
   *pt=8;
   cout<<pt<<endl;
   cout<<*pt<<endl;
   cout<<&a<<endl;
   cout<<a<<endl;
   
    return 0;
}