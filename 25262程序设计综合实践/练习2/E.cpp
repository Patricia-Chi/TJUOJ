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

bool check(vector<int> &a, ll x, ll need)
{
    ll cnt = 0;
    for (int i = 1, j = 1; i <= n; i++)
    {
        while (j <= n and a[j] - a[i] <= x)
        {
            j++;
        }
        cnt += j - i - 1;
    }
    return cnt >= need;
}

bool solve()
{
    if (!(cin >> n))
    {
        return false;
    }
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin() + 1, a.end());
    ll need = 1LL * n * (n - 1) / 2;
    need = (need + 1) / 2;
    ll l = 0, r = a[n] - a[1];
    while (l < r)
    {
        ll mid = (l + r) >> 1;
        if (check(a, mid, need))
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << l << endl;
    return true;
}

int main()
{
    // freopen("test.in", "r", stdin);
    // freopen("test.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    while (solve())
    {
    }
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}
