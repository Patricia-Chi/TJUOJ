#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    int n;
    cin >> T;
    while (T--)
    {
        cin >> n;
        bool flag = 0;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < (1 << n); i++)
        {
            int cnt1 = 0, cnt2 = 0;
            for (int j = 0; j < n; j++)
            {
                if (i & (1 << j))
                {
                    cnt1 += a[j];
                }
                else
                {
                    cnt2 += a[j];
                }
            }
            if (cnt1 == cnt2)
            {
                flag = 1;
                cout << "YES" << endl;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
