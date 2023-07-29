#include <bits/stdc++.h>
using namespace std;
string lowerCaseConverter(string str)
{
    for (int i = 0; i < str.length(); i++)  
    {
        if(!islower(str[i]))
        {
          str[i]+=32;
        }
    }
    return str;
    
}
void solution(string str1,string str2)
{
    if(str1.compare(str2)==0)
    {
       cout<<0<<endl; 
    }
   else if(str1.compare(str2)>0)
    {
       cout<<1<<endl; 
    }
    else
    {
       cout<<-1<<endl; 

    }

}
int main()
{
    string str1,str2;
    cin>>str1>>str2;
      str1= lowerCaseConverter(str1);
      str2= lowerCaseConverter(str2);
      solution(str1,str2);
    return 0;
}