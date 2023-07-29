#include <bits/stdc++.h>
using namespace std;
string removePlus(string str)
{
    string st;
    for (int i = 0; i < str.length(); i = i + 2)
    {
        st += str[i];
    }
    return st;
}
string bubbleSorting(string str)
{
    for (int i = 0; i < str.length() - 1; i++)
    {
        for (int j = i; j < str.length(); j++)
        {
            if (str[i] > str[j])
            {
                char tmp = str[i];
                str[i] = str[j];
                str[j] = tmp;
            }
        }
    }
    return str;
}
void solution(string str)
{
    str = removePlus(str);
    str = bubbleSorting(str);

    string sol = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (i == str.length() - 1)
        {
            sol = sol + str[i];
        }
        else
        {
            sol = sol + str[i] + "+";
        }
    }
    cout << sol << endl;
}
int main()
{
    string str;
    cin >> str;
    solution(str);
    return 0;
}