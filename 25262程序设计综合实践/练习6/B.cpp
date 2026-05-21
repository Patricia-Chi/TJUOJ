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
vi fa, d;

int find(int x)
{
    if (fa[x] == x)
    {
        return x;
    }
    int f = fa[x];
    fa[x] = find(fa[x]);
    d[x] = (d[x] + d[f]) % 3;
    return fa[x];
}

void solve()
{
    cin >> n >> k;
    fa.assign(n + 1, 0);
    d.assign(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        fa[i] = i;
    }

    ans = 0;
    while (k--)
    {
        int op, x, y;
        cin >> op >> x >> y;
        if (x < 1 || x > n || y < 1 || y > n)
        {
            ans++;
            continue;
        }
        if (op == 2 && x == y)
        {
            ans++;
            continue;
        }

        int fx = find(x), fy = find(y);
        if (op == 1)
        {
            if (fx == fy)
            {
                if ((d[x] - d[y] + 3) % 3 != 0)
                {
                    ans++;
                }
            }
            else
            {
                fa[fx] = fy;
                d[fx] = (d[y] - d[x] + 3) % 3;
            }
        }
        else
        {
            if (fx == fy)
            {
                if ((d[x] - d[y] + 3) % 3 != 1)
                {
                    ans++;
                }
            }
            else
            {
                fa[fx] = fy;
                d[fx] = (d[y] + 1 - d[x] + 6) % 3;
            }
        }
    }
    cout << ans << endl;
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
