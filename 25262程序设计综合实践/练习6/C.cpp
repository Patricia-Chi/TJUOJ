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
constexpr int N = 3000000;
int T;
int n, m, k;
ll ans;
string s;

struct query
{
    int x, id, op;
};

void solve()
{
    vector<array<int, 2>> ask;
    int a, b, mx = 0;
    while (cin >> a >> b)
    {
        ask.push_back({a, b});
        mx = max(mx, b);
    }

    vi phi(mx + 1), prime;
    vector<bool> vis(mx + 1, false);
    phi[1] = 1;
    for (int i = 2; i <= mx; i++)
    {
        if (!vis[i])
        {
            prime.push_back(i);
            phi[i] = i - 1;
        }
        for (int p : prime)
        {
            if (i * 1LL * p > mx)
                break;
            vis[i * p] = true;
            if (i % p == 0)
            {
                phi[i * p] = phi[i] * p;
                break;
            }
            phi[i * p] = phi[i] * (p - 1);
        }
    }

    vector<query> q;
    for (int i = 0; i < ask.size(); i++)
    {
        q.push_back({ask[i][1], i, 1});
        q.push_back({ask[i][0] - 1, i, -1});
    }
    sort(q.begin(), q.end(), [&](query a, query b)
    {
        return a.x < b.x;
    });

    vector<ll> res(ask.size(), 0);
    ll sum = 0;
    int p = 0;
    for (int i = 1; i <= mx; i++)
    {
        sum += phi[i];
        while (p < q.size() && q[p].x == i)
        {
            res[q[p].id] += q[p].op * sum;
            p++;
        }
    }
    while (p < q.size() && q[p].x == 0)
    {
        p++;
    }
    for (ll x : res)
    {
        cout << x << endl;
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
