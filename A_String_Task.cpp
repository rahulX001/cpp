#include <bits/stdc++.h>
using namespace std;
string deleteVowel(string str)
{string st;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&& str[i]!='u'&&str[i]!='y')
        {
          st.push_back(str[i]);
        }
    }
    return st;
}
string upperCase(string str)
{
    for(int i=0;i<str.length();i++)
    {
        if(isupper(str[i]))
        {
            str[i]=str[i]+32;
        }
    }
    return str;
}
void solution(string str)
{ string st;
    for(int i=0;i<str.length();i++)
    {  
       
        st= st+"."+str[i];
    }
    cout<<st<<endl;
}
int main()
{
   string str;
   cin>>str;
   str = upperCase(str);
   str=deleteVowel(str);
     solution(str);   
        
    
    return 0;
}