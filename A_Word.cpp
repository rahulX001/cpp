#include <bits/stdc++.h>
using namespace std;


string upperCase(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        s[i]=toupper(s[i]);
    } 
    return s;   
}
string lowerCase(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        s[i]=tolower(s[i]);
    } 
    return s;   
}


int main()
{

    string s;
    cin >> s;
    int l = 0, u = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (islower(s[i]))
        {
            l++;
        }
        else
        {
            u++;
        }
    }
    if (u == l)
    {
        cout << lowerCase(s)  << endl;
    }
    else if (u > l)
    {
        cout << upperCase(s) << endl;
    }
    else
    {
        cout << lowerCase(s) << endl;
    }

    return 0;
}