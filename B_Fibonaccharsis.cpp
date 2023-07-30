#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n;
        cin >> k;
        int iterator = k-1;
        int count = 0;
        for (int i = n, g=1; i >= 0; i--,g++)
        {
            int arr[k];
            arr[iterator] = n;
             vector<int> array;
            array.push_back(n);
            
            for (int j= g; j <n; j++)
            {
                arr[iterator-1] = arr[iterator]-j;
                int a = arr[iterator] - arr[iterator-1];
                if (a > 0 && iterator < k)
                {
                    iterator--;
                    array.push_back(arr[iterator-1]);
                }
            }
            if (array.size()==k)
            {
                for(int l = 0; l < k; l++)
                {
                    cout << array[l] << " ";
                }
            cout << endl;
            count++;}
        }
        cout << count << endl;
    }
    return 0;
}