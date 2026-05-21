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

void solve()
{
    cin >> n >> m;
    vector<string> a(n + 1);
    vector<vector<bool>> vis(n + 1, vector<bool>(m + 1, false));
    for (int i = 1; i <= n; i++)
    {
        cin >> s;
        a[i] = " " + s;
    }

    int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
    ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] == 'W' && !vis[i][j])
            {
                ans++;
                queue<pii> q;
                q.push({i, j});
                vis[i][j] = true;
                while (!q.empty())
                {
                    pii now = q.front();
                    q.pop();
                    for (int p = 0; p < 8; p++)
                    {
                        int x = now.first + dx[p];
                        int y = now.second + dy[p];
                        if (x < 1 || x > n || y < 1 || y > m)
                            continue;
                        if (a[x][y] == '.' || vis[x][y])
                            continue;
                        vis[x][y] = true;
                        q.push({x, y});
                    }
                }
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
