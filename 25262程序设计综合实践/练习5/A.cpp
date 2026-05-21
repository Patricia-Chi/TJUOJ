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
    vii a(5, vi(5));
    vector<vector<bool>> vis(5, vector<bool>(5, false));
    vector<vector<pii>> pre(5, vector<pii>(5, {-1, -1}));
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
        }
    }

    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};
    queue<pii> q;
    q.push({0, 0});
    vis[0][0] = true;
    while (!q.empty())
    {
        pii now = q.front();
        q.pop();
        if (now.first == 4 && now.second == 4)
        {
            break;
        }
        for (int p = 0; p < 4; p++)
        {
            int x = now.first + dx[p];
            int y = now.second + dy[p];
            if (x < 0 || x >= 5 || y < 0 || y >= 5)
                continue;
            if (a[x][y] == 1 || vis[x][y])
                continue;
            vis[x][y] = true;
            pre[x][y] = now;
            q.push({x, y});
        }
    }

    vector<pii> path;
    pii now = {4, 4};
    while (now.first != -1)
    {
        path.push_back(now);
        now = pre[now.first][now.second];
    }
    reverse(path.begin(), path.end());
    for (pii p : path)
    {
        cout << '(' << p.first << ", " << p.second << ')' << endl;
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
