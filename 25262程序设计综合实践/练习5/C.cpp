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

struct node
{
    int a, b, c, d;
};

void solve(int S, int N, int M)
{
    if (S % 2 == 1)
    {
        cout << "NO" << endl;
        return;
    }

    vector<vector<vector<bool>>> vis(S + 1, vector<vector<bool>>(N + 1, vector<bool>(M + 1, false)));
    queue<node> q;
    q.push({S, 0, 0, 0});
    vis[S][0][0] = true;
    while (!q.empty())
    {
        node now = q.front();
        q.pop();
        if ((now.a == S / 2 && now.b == S / 2) || (now.a == S / 2 && now.c == S / 2) || (now.b == S / 2 && now.c == S / 2))
        {
            cout << now.d << endl;
            return;
        }

        int x[3] = {now.a, now.b, now.c};
        int cap[3] = {S, N, M};
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (i == j || x[i] == 0 || x[j] == cap[j])
                    continue;
                int y[3] = {x[0], x[1], x[2]};
                int t = min(y[i], cap[j] - y[j]);
                y[i] -= t;
                y[j] += t;
                if (!vis[y[0]][y[1]][y[2]])
                {
                    vis[y[0]][y[1]][y[2]] = true;
                    q.push({y[0], y[1], y[2], now.d + 1});
                }
            }
        }
    }
    cout << "NO" << endl;
}

int main()
{
    // freopen("test.in", "r", stdin);
    // freopen("test.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    while (true)
    {
        int S, N, M;
        cin >> S >> N >> M;
        if (S == 0 && N == 0 && M == 0)
        {
            break;
        }
        solve(S, N, M);
    }
    return 0;
}
