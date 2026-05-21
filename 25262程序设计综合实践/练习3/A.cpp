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

bool check(vector<ll> &a, ll x)
{
    ll pre = -(1LL << 60);
    for (int i = 1; i <= n; i++)
    {
        ll l = a[i] - x, r = a[i] + x;
        ll now = max(pre + 1, l);
        if (now > r)
        {
            return false;
        }
        pre = now;
    }
    return true;
}

void solve()
{
    cin >> n;
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    ll l = 0, r = 1000000000;
    while (l < r)
    {
        ll mid = (l + r) >> 1;
        if (check(a, mid))
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << "Case #" << k << ":" << endl;
    cout << l << endl;
}

int main()
{
    // freopen("test.in", "r", stdin);
    // freopen("test.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    cin >> T;
    for (k = 1; k <= T; k++)
    {
        solve();
    }
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}
