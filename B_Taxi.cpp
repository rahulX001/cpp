#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int s[t];
    int sum = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> s[i];
    }
    int a = 0, b = 0, c = 0, d = 0;

    for (int i = 0; i < t; i++)
    {
        if (s[i] == 4)
        {
            d++;
        }
        else if (s[i] == 3)
        {
            c++;
        }
        else if (s[i] == 2)
        {
            b++;
        }
        else if (s[i] == 1)
        {
            a++;
        }
    }
   

    sum += d;
    sum += c;
    if (b % 2 == 0)
    {
        sum += b / 2;
    }
    if (b % 2 > 0)
    {
        sum += b / 2 + 1;
    }
   
    int check = b % 2 == 0 ? 0 : b % 2;
        int check2 = a % 2 == 0 ? a / 2 : a / 2 + 1;
    if(a<=c||check==check2)
    {
        sum;
    }
    if(a>c)
    {
        int re = a-c;
        int check21 = re % 2 == 0 ? re / 2 : re / 2 + 1;

        if(check21==check)
        {
            sum;
        }
       if(check21>check)
       {
        int ree= 2*(check21-check);
        int last = ree%4==0?ree/4:ree/4+1;
        sum+=last;
       }
    }
    cout << sum << endl;

    return 0;
}