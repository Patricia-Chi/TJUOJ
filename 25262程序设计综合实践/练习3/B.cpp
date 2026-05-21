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

bool check(vi &a, int x, int l)
{
    int cnt = 0, pre = 0;
    for (int i = 1; i <= n + 1; i++)
    {
        if (a[i] - a[pre] < x)
        {
            cnt++;
        }
        else
        {
            pre = i;
        }
    }
    return cnt <= m;
}

void solve()
{
    int l;
    cin >> l >> n >> m;
    vi a(n + 2);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    a[n + 1] = l;
    sort(a.begin() + 1, a.begin() + n + 2);
    int l1 = 1, r1 = l;
    while (l1 < r1)
    {
        int mid = (l1 + r1 + 1) >> 1;
        if (check(a, mid, l))
        {
            l1 = mid;
        }
        else
        {
            r1 = mid - 1;
        }
    }
    cout << l1 << endl;
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
