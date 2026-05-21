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
    cin >> m >> n;
    vi dp(m + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        int w, c;
        cin >> w >> c;
        for (int j = m; j >= w; j--)
        {
            dp[j] = max(dp[j], dp[j - w] + c);
        }
    }
    cout << dp[m] << endl;
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
