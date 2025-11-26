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
vector<int> a;

void solve()
{
    cin >> n >> m;
    int mx = -1;
    int l = 0, r = 0;
    bool flag;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> k;
            // cout << i << ' ' << j << ": " << k << endl;
            if (abs(k) >= mx)
            {
                l = i;
                r = j;
                mx = abs(k);
                k < 0 ? flag = 1 : flag = 0;
            }
        }
    }
    cout << l << ' ' << r << ' ' << (flag == 1 ? -1 * mx : mx);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int tmp;
    T = 1;
    // cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}