#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
// #define int long long // 不开 long long 见祖宗！！！记得改 signed main ！！！
//  #pragma GCC optimize(3)

using namespace std;

int T;
int n, m, ans;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    T = 1;
    // cin >> T;
    while (T--)
    {
        cin >> n;
        int a[n + 1], b[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
        }
        sort(a + 1, a + n + 1);
        sort(b + 1, b + n + 1);
        int temp = n;
        for (int i = n; i > 0; i--)
        {
            for (int j = temp; j > 0; j--)
            {
                if (b[i] > a[j])
                {
                    ans++;
                    temp = j - 1;
                    break;
                }
                if (j == 1 and b[i] <= a[j])
                {
                    cout << ans;
                    return 0;
                }
            }
        }
        cout << ans;
    }
    return 0;
}