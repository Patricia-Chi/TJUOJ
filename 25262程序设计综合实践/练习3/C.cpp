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
constexpr int N = 50010;
int T;
int n, m, k;
ll ans;
string s;
int mx[N][20], mn[N][20], lg[N];

void solve()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> mx[i][0];
        mn[i][0] = mx[i][0];
    }
    lg[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        lg[i] = lg[i >> 1] + 1;
    }
    for (int j = 1; j <= lg[n]; j++)
    {
        for (int i = 1; i + (1 << j) - 1 <= n; i++)
        {
            mx[i][j] = max(mx[i][j - 1], mx[i + (1 << (j - 1))][j - 1]);
            mn[i][j] = min(mn[i][j - 1], mn[i + (1 << (j - 1))][j - 1]);
        }
    }
    while (m--)
    {
        int l, r;
        cin >> l >> r;
        int t = lg[r - l + 1];
        int x = max(mx[l][t], mx[r - (1 << t) + 1][t]);
        int y = min(mn[l][t], mn[r - (1 << t) + 1][t]);
        cout << x - y << endl;
    }
}

int main()
{
    // freopen("test.in", "r", stdin);
    // freopen("test.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    T = 1;
    // cin >> T;
    while (T--)
    {
        solve();
    }
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}
