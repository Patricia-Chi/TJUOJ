#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
// #define int long long // 不开 long long 见祖宗
//  #pragma GCC optimize(3)

using namespace std;

const double PI = 3.141592653589793;
int T;
int n, m, k;
ll ans;
string s;

bool check(int x, int y, int z)
{
    return x + y > z and x + z > y and y + z > x;
}

void solve()
{
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
    {
        cin >> x;
    }
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (check(a[i], a[j], a[k]))
                {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    T = 1;
    // cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}