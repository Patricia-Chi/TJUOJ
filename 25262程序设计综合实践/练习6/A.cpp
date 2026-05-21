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
vi a, vis;
int sum, len, cnt;

bool dfs(int now, int last, int num)
{
    if (num > cnt)
    {
        return true;
    }
    if (now == len)
    {
        return dfs(0, 1, num + 1);
    }

    int fail = -1;
    for (int i = last; i <= n; i++)
    {
        if (vis[i] || now + a[i] > len || a[i] == fail)
            continue;
        vis[i] = 1;
        if (dfs(now + a[i], i + 1, num))
        {
            return true;
        }
        vis[i] = 0;
        fail = a[i];
        if (now == 0 || now + a[i] == len)
        {
            return false;
        }
    }
    return false;
}

void solve()
{
    while (cin >> n && n)
    {
        a.assign(n + 1, 0);
        vis.assign(n + 1, 0);
        sum = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        sort(a.begin() + 1, a.end(), greater<int>());
        for (len = a[1]; len <= sum; len++)
        {
            if (sum % len != 0)
                continue;
            cnt = sum / len;
            fill(vis.begin(), vis.end(), 0);
            if (dfs(0, 1, 1))
            {
                cout << len << endl;
                break;
            }
        }
    }
}

int main()
{
    // freopen("test.in", "r", stdin);
    // freopen("test.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}
