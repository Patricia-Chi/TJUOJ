#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define endl '\n'
// #define int long long // 不开 long long 见祖宗
//  #pragma GCC optimize(3)

using namespace std;

using vi = vector<int>;
using vii = vector<vector<int>>;
using pii = pair<int, int>;

const double PI = 3.141592653589793;
const int mod = 998244353;
constexpr int N = -1;
int T;
int n, m, k;
ll ans;
string s;

bool solve()
{
    if (!(cin >> m >> n >> T))
    {
        return false;
    }
    vector<vector<pii>> g(T + 1);
    for (int i = 1; i <= n; i++)
    {
        int w, c, p;
        cin >> w >> c >> p;
        g[p].push_back({w, c});
    }

    vector<ll> dp(m + 1, 0);
    for (int i = 1; i <= T; i++)
    {
        vector<ll> pre = dp;
        for (int j = 0; j < g[i].size(); j++)
        {
            int w = g[i][j].first;
            int c = g[i][j].second;
            for (int v = m; v >= w; v--)
            {
                dp[v] = max(dp[v], pre[v - w] + c);
            }
        }
    }
    cout << dp[m] << endl;
    return true;
}

int main()
{
    // freopen("test.in", "r", stdin);
    // freopen("test.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    while (solve())
    {
    }
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}
