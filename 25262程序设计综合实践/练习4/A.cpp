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
    cin >> n >> k;
    vi a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    deque<int> q;
    for (int i = 1; i <= n; i++)
    {
        while (!q.empty() && q.front() <= i - k)
        {
            q.pop_front();
        }
        while (!q.empty() && a[q.back()] >= a[i])
        {
            q.pop_back();
        }
        q.push_back(i);
        if (i >= k)
        {
            cout << a[q.front()] << " \n"[i == n];
        }
    }

    q.clear();
    for (int i = 1; i <= n; i++)
    {
        while (!q.empty() && q.front() <= i - k)
        {
            q.pop_front();
        }
        while (!q.empty() && a[q.back()] <= a[i])
        {
            q.pop_back();
        }
        q.push_back(i);
        if (i >= k)
        {
            cout << a[q.front()] << " \n"[i == n];
        }
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
