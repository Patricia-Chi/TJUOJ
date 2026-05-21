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
string pre, in;

void dfs(int pl, int pr, int il, int ir)
{
    if (pl > pr)
    {
        return;
    }
    char rt = pre[pl];
    int pos = il;
    while (in[pos] != rt)
    {
        pos++;
    }
    int len = pos - il;
    dfs(pl + 1, pl + len, il, pos - 1);
    dfs(pl + len + 1, pr, pos + 1, ir);
    cout << rt;
}

void solve()
{
    n = pre.size();
    dfs(0, n - 1, 0, n - 1);
    cout << endl;
}

int main()
{
    // freopen("test.in", "r", stdin);
    // freopen("test.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    while (cin >> pre >> in)
    {
        solve();
    }
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}
