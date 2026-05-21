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
vi a;
vi sum;
int len;

bool dfs(int x)
{
    if (x > n)
    {
        return true;
    }
    for (int i = 0; i < 4; i++)
    {
        if (sum[i] + a[x] > len)
            continue;
        bool ok = true;
        for (int j = 0; j < i; j++)
        {
            if (sum[j] == sum[i])
            {
                ok = false;
                break;
            }
        }
        if (!ok)
            continue;
        sum[i] += a[x];
        if (dfs(x + 1))
        {
            return true;
        }
        sum[i] -= a[x];
    }
    return false;
}

void solve()
{
    cin >> n;
    a.assign(n + 1, 0);
    int tot = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        tot += a[i];
    }
    if (tot % 4 != 0)
    {
        cout << "no" << endl;
        return;
    }
    len = tot / 4;
    sort(a.begin() + 1, a.end(), greater<int>());
    if (a[1] > len)
    {
        cout << "no" << endl;
        return;
    }
    sum.assign(4, 0);
    if (dfs(1))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
}

int main()
{
    // freopen("test.in", "r", stdin);
    // freopen("test.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    cin >> T;
    while (T--)
    {
        solve();
    }
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}
